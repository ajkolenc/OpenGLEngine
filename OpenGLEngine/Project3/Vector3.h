#pragma once

#ifndef VECTOR3_H

#define VECTOR3_H

struct Vector3
{
	float x, y, z;

	inline Vector3(){}
	inline Vector3(const float X, const float Y, const float Z){
		x = X;
		y = Y;
		z = Z;
	}

	inline Vector3 operator + (const Vector3& v) const {
		return Vector3(x + v.x, y + v.y, z + v.z);
	}

	inline Vector3 operator * (const Vector3& v) const {
		return Vector3(x * v.x, y * v.y, z * v.z);
	}

	inline float Dot(const Vector3& v) const {
		return x * v.x + y * v.y + z * v.z;
	}
};

#endif