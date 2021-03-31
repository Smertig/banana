#pragma once

#include <optional>
#include <memory>
#include <cassert>

namespace banana {

template <class T>
class dynamic_optional;

namespace detail {
    template <class>
    struct is_optional : std::false_type {};

    template <class T>
    struct is_optional<dynamic_optional<T>> : std::true_type {};

    template <class T>
    struct is_optional<std::optional<T>> : std::true_type {};
} // namespace detail

template <class T>
class dynamic_optional {
    template <class U>
    using is_converting_ctor = std::negation<std::disjunction<
            std::is_reference<U>,
            std::is_constructible<T,       dynamic_optional<U>& >,
            std::is_constructible<T, const dynamic_optional<U>& >,
            std::is_constructible<T,       dynamic_optional<U>&&>,
            std::is_constructible<T, const dynamic_optional<U>&&>,
            std::is_convertible<      dynamic_optional<U>& , T>,
            std::is_convertible<const dynamic_optional<U>& , T>,
            std::is_convertible<      dynamic_optional<U>&&, T>,
            std::is_convertible<const dynamic_optional<U>&&, T>
    >>;

    template <class U>
    using is_converting_assign = std::conjunction<
        is_converting_ctor<U>,
        std::negation<std::disjunction<
            std::is_assignable<T&,       dynamic_optional<U>& >,
            std::is_assignable<T&, const dynamic_optional<U>& >,
            std::is_assignable<T&,       dynamic_optional<U>&&>,
            std::is_assignable<T&, const dynamic_optional<U>&&>
        >>
    >;

public:
    using value_type = T;

    // Constructs an object that does not contain a value.
    dynamic_optional(std::nullopt_t = std::nullopt) {
        // empty
    }

    // Copy constructor
    dynamic_optional(const dynamic_optional& rhs) : m_storage(rhs ? std::make_unique<T>(*rhs) : nullptr) {
        // empty
    }

    // Move constructor
    dynamic_optional(dynamic_optional&&) noexcept = default;

    // Converting copy constructor (implicit)
    template <class U, std::enable_if_t<std::conjunction_v<
        // Not default copy-ctor
        std::negation<std::is_same<U, T>>,
        // From cppref for std::optional
        is_converting_ctor<U>,
        std::is_constructible<T, const U&>,
        std::is_convertible<const U&, T>
    >, int> = 42>
    dynamic_optional(const dynamic_optional<U>& rhs) : m_storage(rhs ? std::make_unique<T>(*rhs) : nullptr) {
        // empty
    }

    // Converting copy constructor (explicit)
    template <class U, std::enable_if_t<std::conjunction_v<
        // Not default copy-ctor
        std::negation<std::is_same<U, T>>,
        // From cppref for std::optional
        is_converting_ctor<U>,
        std::is_constructible<T, const U&>,
        std::negation<std::is_convertible<const U&, T>>
    >, int> = 42>
    explicit dynamic_optional(const dynamic_optional<U>& rhs) : m_storage(rhs ? std::make_unique<T>(*rhs) : nullptr) {
        // empty
    }

    // Converting move constructor (implicit)
    template <class U, std::enable_if_t<std::conjunction_v<
        // Not default move-ctor
        std::negation<std::is_same<U, T>>,
        // From cppref for std::optional
        is_converting_ctor<U>,
        std::is_constructible<T, U&&>,
        std::is_convertible<U&&, T>
    >, int> = 42>
    dynamic_optional(dynamic_optional<U>&& rhs) : m_storage(rhs ? std::make_unique<T>(std::move(*rhs)) : nullptr) {
        // empty
    }

    // Converting move constructor (explicit)
    template <class U, std::enable_if_t<std::conjunction_v<
        // Not default move-ctor
        std::negation<std::is_same<U, T>>,
        // From cppref for std::optional
        is_converting_ctor<U>,
        std::is_constructible<T, U&&>,
        std::negation<std::is_convertible<U&&, T>>
    >, int> = 42>
    explicit dynamic_optional(dynamic_optional<U>&& rhs) : m_storage(rhs ? std::make_unique<T>(std::move(*rhs)) : nullptr) {
        // empty
    }

    // Constructs an optional object that contains a value, initialized as if direct-initializing
    // an object of type T with the expression std::forward<U>(value). (implicit)
    template <class U = T, std::enable_if_t<std::conjunction_v<
        // Is should not be an optional (std:: or dynamic_) because of overloads above
        std::negation<detail::is_optional<std::decay_t<U>>>,
        // From cppref for std::optional
        std::is_constructible<T, U&&>,
        std::is_convertible<U&&, T>
    >, int> = 42>
    dynamic_optional(U&& value) : m_storage(std::make_unique<T>(std::forward<U>(value))) {
        // empty
    }

    // Constructs an optional object that contains a value, initialized as if direct-initializing
    // an object of type T with the expression std::forward<U>(value). (explicit)
    template <class U = T, std::enable_if_t<std::conjunction_v<
        // Is should not be an optional (std:: or dynamic_) because of overloads above
        std::negation<detail::is_optional<std::decay_t<U>>>,
        // From cppref for std::optional
        std::is_constructible<T, U&&>,
        std::negation<std::is_convertible<U&&, T>>
    >, int> = 42>
    explicit dynamic_optional(U&& value) : m_storage(std::make_unique<T>(std::forward<U>(value))) {
        // empty
    }

    dynamic_optional& operator=(std::nullopt_t) {
        m_storage.reset();
        return *this;
    }

    dynamic_optional& operator=(const dynamic_optional& rhs) {
        return *this = dynamic_optional(rhs);
    }

    dynamic_optional& operator=(dynamic_optional&&) noexcept = default;

    template <class U, std::enable_if_t<std::conjunction_v<
        // Not default copy-assign
        std::negation<std::is_same<U, T>>,
        // From cppref for std::optional
        is_converting_ctor<U>,
        std::is_constructible<T, const U&>,
        std::is_assignable<T&, const U&>
    >, int> = 42>
    dynamic_optional& operator=(const dynamic_optional<U>& rhs) {
        if (!rhs.has_value()) {
            m_storage.reset();
        }
        else if (has_value()) {
            *m_storage = *rhs;
        }
        else {
            m_storage = std::make_unique<T>(*rhs);
        }

        return *this;
    }

    template <class U, std::enable_if_t<std::conjunction_v<
        // Not default copy-assign
        std::negation<std::is_same<U, T>>,
        // From cppref for std::optional
        is_converting_ctor<U>,
        std::is_constructible<T, U>,
        std::is_assignable<T&, U>
    >, int> = 42>
    dynamic_optional& operator=(dynamic_optional<U>&& rhs) {
        if (!rhs.has_value()) {
            m_storage.reset();
        }
        else if (has_value()) {
            *m_storage = std::move(*rhs);
        }
        else {
            m_storage = std::make_unique<T>(std::move(*rhs));
        }

        return *this;
    }

    template <class U = T, std::enable_if_t<std::conjunction_v<
        // Is should not be an optional (std:: or dynamic_) because of overloads above
        std::negation<detail::is_optional<std::decay_t<U>>>,
        // From cppref for std::optional
        std::is_constructible<T, U>,
        std::is_assignable<T&, U>,
        std::negation<std::conjunction<
            std::is_scalar<T>,
            std::is_same<T, std::decay_t<U>>
        >>
    >, int> = 42>
    dynamic_optional& operator=(U&& value) {
        if (has_value()) {
            *m_storage = std::forward<U>(value);
        }
        else {
            m_storage = std::make_unique<T>(std::forward<U>(value));
        }
        return *this;
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
