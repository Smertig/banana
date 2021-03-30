#pragma once

#include <optional>
#include <memory>
#include <cassert>

namespace banana {

template <class T>
class dynamic_optional {

public:
    using value_type = T;

    dynamic_optional(std::nullopt_t = std::nullopt) {
        // empty
    }

    dynamic_optional(const dynamic_optional& rhs) : m_storage(rhs ? std::make_unique<T>(*rhs) : nullptr) {
        // empty
    }

    dynamic_optional(dynamic_optional&&) noexcept = default;

    dynamic_optional(T value) : m_storage(std::make_unique<T>(std::move(value))) {
        // empty
    }

    template <class U>
    dynamic_optional(const std::optional<U>& value) : m_storage(value ? std::make_unique<T>(*value) : nullptr) {
        // empty
    }

    template <class U>
    dynamic_optional(std::optional<U>&& value) : m_storage(value ? std::make_unique<T>(std::move(*value)) : nullptr) {
        // empty
    }

    // TODO: add explicit ctor
    template <class U>
    dynamic_optional(U value, std::enable_if_t<
            std::is_convertible_v<U, T> && !std::is_same_v<T, U> && !std::is_same_v<dynamic_optional<U>, T>
    >* = nullptr) : m_storage(std::make_unique<T>(std::move(value))) {
        // empty
    }

    dynamic_optional& operator=(const dynamic_optional& rhs) {
        return *this = dynamic_optional(rhs);
    }

    dynamic_optional& operator=(dynamic_optional&&) noexcept = default;

    dynamic_optional& operator=(T value) {
        return *this = dynamic_optional(std::move(value));
    }

    template <class U>
    dynamic_optional& operator=(const std::optional<U>& value) {
        return *this = dynamic_optional(value);
    }

    template <class U>
    dynamic_optional& operator=(std::optional<U>&& value) {
        return *this = dynamic_optional(std::move(value));
    }

    explicit operator bool() const noexcept {
        return has_value();
    }

    bool has_value() const noexcept {
        return m_storage != nullptr;
    }

    const T& value() const {
        if (!has_value()) {
            throw std::bad_optional_access{};
        }
        return **this;
    }

    T& value() {
        if (!has_value()) {
            throw std::bad_optional_access{};
        }
        return **this;
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
        return *m_storage;
    }

    T& operator*() noexcept {
        assert(has_value());
        return *m_storage;
    }

    const T* operator->() const noexcept {
        return &**this;
    }

    T* operator->() noexcept {
        return &**this;
    }

private:
    std::unique_ptr<T> m_storage;
};

} // namespace banana
