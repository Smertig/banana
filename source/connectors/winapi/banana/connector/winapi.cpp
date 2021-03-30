#include "winapi.hpp"

#include <Windows.h>
#include <WinInet.h>

#include <sstream>
#include <array>
#include <type_traits>

namespace {

template <class Handle, Handle Invalid, auto Deleter>
class unique_handle {
    static_assert(std::is_nothrow_invocable_v<decltype(Deleter), Handle>);

    Handle m_handle;

public:
    explicit unique_handle(Handle handle) : m_handle(handle) {
        // nothing
    }

    ~unique_handle() noexcept {
        reset();
    }

    unique_handle(const unique_handle&) = delete;

    unique_handle& operator=(const unique_handle&) = delete;

    unique_handle(unique_handle&& rhs) noexcept : m_handle(std::exchange(rhs.m_handle, Invalid)) {
        // nothing
    }

    unique_handle& operator=(unique_handle&& rhs) noexcept {
        std::swap(m_handle, rhs.m_handle);
        return *this;
    }

    explicit operator bool() const {
        return m_handle != Invalid;
    }

    operator Handle() const {
        return m_handle;
    }

    void reset() noexcept {
        if (m_handle != Invalid) {
            Deleter(m_handle);
            m_handle = Invalid;
        }
    }
};

} // unnamed namespace

namespace banana::connector {

basic_winapi::basic_winapi(std::string token) : m_token(std::move(token)) {
    // nothing
}

expected<std::string> basic_winapi::do_request(std::string_view method, std::optional<std::string> body) {
    std::optional<std::string> header;
    if (body.has_value()) {
        header = "Content-Type: application/json\r\n";
    }

    using internet_handle = unique_handle<HINTERNET, nullptr, InternetCloseHandle>;
    internet_handle http_session{ InternetOpenA(
            "banana",
            INTERNET_OPEN_TYPE_PRECONFIG,
            nullptr,
            nullptr,
            0) };

    internet_handle http_connection{ InternetConnectA(
            http_session,
            m_api_path.data(),
            INTERNET_DEFAULT_HTTPS_PORT,
            "",
            "",
            INTERNET_SERVICE_HTTP,
            0,
            0) };

    internet_handle http_file{ HttpOpenRequestA(
            http_connection,
            "POST",
            ("/bot" + m_token + "/" + std::string(method)).c_str(),
            nullptr,
            nullptr,
            nullptr,
            INTERNET_FLAG_SECURE,
            0) };

    if (!HttpSendRequestA(http_file,
            header ? header->data() : nullptr,
            static_cast<DWORD>(header ? header->size() : 0),
            body ? body->data() : nullptr,
            static_cast<DWORD>(body ? body->size() : 0)
    )) {
        std::ostringstream os;
        os << "HttpSendRequest error #" << GetLastError();
        return error_t<>{ std::move(os).str() };
    }

    std::string result;

    while (true) {
        std::array<char, 0x400> buffer;
        DWORD bytes_read;

        const bool is_read = InternetReadFile(
                             http_file,
                             buffer.data(),
                             static_cast<DWORD>(buffer.size()),
                             &bytes_read);

        if (bytes_read == 0) {
            break;
        }

        if (!is_read) {
            std::ostringstream os;
            os << "InternetReadFile error #" << GetLastError();
            return error_t<>{ std::move(os).str() };
        }

        result.append(buffer.data(), buffer.data() + bytes_read);
    }

    return expected(result);
}

} // namespace banana::connector
