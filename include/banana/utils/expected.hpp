#pragma once

#include <variant> // std::vector
#include <string> // std::string
#include <stdexcept> // std::runtime_error
#include <functional> // std::invoke
#include <cassert> // assert

namespace banana {

template <class E = std::string>
struct error_t {
    E value;
};

template <class T, class E = std::string>
class expected {
    using storage_t = std::variant<T, E>;

    void check_value_valid() const {
        assert(!m_storage.valueless_by_exception());
        if (m_storage.index() != 0) {
            if constexpr (std::is_same_v<std::string, E>) {
                throw std::runtime_error("bad expected access, contains error: " + std::get<1>(m_storage));
            }
            else {
                throw std::runtime_error("bad expected access, contains error");
            }
        }
    }

    void check_error_valid() const {
        assert(!m_storage.valueless_by_exception());
        if (m_storage.index() != 1) {
            throw std::runtime_error("bad expected access, contains value");
        }
    }

public:
    explicit expected(T value) : m_storage(std::in_place_index<0>, std::move(value)) {
        // nothing
    }

    /* implicit */ expected(error_t<E> error) : m_storage(std::in_place_index<1>, std::move(error.value)) {
        // nothing
    }

    bool has_value() const {
        return m_storage.index() == 0;
    }

    explicit operator bool() const noexcept {
        return has_value();
    }

    const T& value() const {
        check_value_valid();
        return **this;
    }

    const E& error() const noexcept {
        check_error_valid();
        return *std::get_if<1>(&m_storage);
    }

    T& value() {
        check_value_valid();
        return **this;
    }

    E& error() noexcept {
        check_error_valid();
        return *std::get_if<1>(&m_storage);
    }

    template <class U>
    T value_or(U&& u) const & {
        static_assert(std::is_convertible_v<U&&, T>);

        return has_value() ? **this : static_cast<T>(std::forward<U>(u));
    }

    template <class U>
    T value_or(U&& u) && {
        static_assert(std::is_convertible_v<U&&, T>);

        return has_value() ? std::move(**this) : static_cast<T>(std::forward<U>(u));
    }

    const T& operator*() const noexcept {
        assert(has_value());
        return *std::get_if<0>(&m_storage);
    }

    T& operator*() noexcept {
        assert(has_value());
        return *std::get_if<0>(&m_storage);
    }

    const T* operator->() const noexcept {
        return &**this;
    }

    T* operator->() noexcept {
        return &**this;
    }

    template <class F>
    expected<std::invoke_result_t<F&&, T>> map(F&& f) && {
        return has_value() ? expected(std::invoke(std::forward<F>(f), std::move(value()))) : error_t<E>{ std::move(error()) };
    }

    template <class F>
    std::invoke_result_t<F&&, T> then(F&& f) && {
        return has_value() ? std::invoke(std::forward<F>(f), std::move(value())) : error_t<E>{ std::move(error()) };
    }

private:
    storage_t m_storage;
};

} // namespace banana
