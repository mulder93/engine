#include "Vec3D.h"
#include <cassert>

namespace engine::math {
    float& Vec3D::operator[](size_t i)
    {
        assert(0 <= i && i <= 2);
        return (&x)[i];
    }

    const float& Vec3D::operator[](size_t i) const
    {
        assert(0 <= i && i <= 2);
        return (&x)[i];
    }

    Vec3D& Vec3D::operator*=(float value) {
        x *= value;
        y *= value;
        z *= value;
        return *this;
    }

    Vec3D& Vec3D::operator/=(float value) {
        x /= value;
        y /= value;
        z /= value;
        return *this;
    }

    Vec3D& Vec3D::operator+=(const Vec3D& other) {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }

    Vec3D& Vec3D::operator-=(const Vec3D& other) {
        x -= other.x;
        y -= other.y;
        z -= other.z;
        return *this;
    }
}