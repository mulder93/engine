#pragma once

#include <cstdlib>
#include <cmath>

namespace engine::math {
    struct Vec3D {
        float x = 0.f;
        float y = 0.f;
        float z = 0.f;

        Vec3D() = default;
        Vec3D(float x, float y, float z) : x(x), y(y), z(z) {}

        float& operator[](size_t i);
        const float& operator[](size_t i) const;

        Vec3D& operator*=(float value);
        Vec3D& operator/=(float value);
        Vec3D& operator+=(const Vec3D& other);
        Vec3D& operator-=(const Vec3D& other);
    };

    inline Vec3D operator*(const Vec3D& vec, float value) {
        return Vec3D(vec.x * value, vec.y * value, vec.z * value);
    }

    inline Vec3D operator/(const Vec3D& vec, float value) {
        const auto factor = 1.f / value;
        return vec * factor;
    }

    inline Vec3D operator-(const Vec3D& vec) {
        return Vec3D(-vec.x, -vec.y, -vec.z);
    }

    inline float Magtitude(const Vec3D& vec) {
        return std::sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
    }

    inline Vec3D Normalize(const Vec3D& vec) {
        return vec / Magtitude(vec);
    }
}