#pragma once

#include <cmath>

namespace codex::math {

struct Vector3 {
    float x {0.0f};
    float y {0.0f};
    float z {0.0f};

    constexpr Vector3() = default;
    constexpr Vector3(float x_value, float y_value, float z_value)
        : x(x_value)
        , y(y_value)
        , z(z_value) {}

    [[nodiscard]] constexpr Vector3 operator+(const Vector3 &other) const {
        return {x + other.x, y + other.y, z + other.z};
    }

    [[nodiscard]] constexpr Vector3 operator-(const Vector3 &other) const {
        return {x - other.x, y - other.y, z - other.z};
    }

    [[nodiscard]] constexpr Vector3 operator*(float scalar) const {
        return {x * scalar, y * scalar, z * scalar};
    }

    [[nodiscard]] float length() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    [[nodiscard]] Vector3 normalized() const {
        const float magnitude = length();
        if (magnitude == 0.0f) {
            return {};
        }
        return {x / magnitude, y / magnitude, z / magnitude};
    }

    [[nodiscard]] static constexpr float dot(const Vector3 &lhs, const Vector3 &rhs) {
        return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
    }

    [[nodiscard]] static constexpr Vector3 cross(const Vector3 &lhs, const Vector3 &rhs) {
        return {
            lhs.y * rhs.z - lhs.z * rhs.y,
            lhs.z * rhs.x - lhs.x * rhs.z,
            lhs.x * rhs.y - lhs.y * rhs.x
        };
    }
};

} // namespace codex::math
