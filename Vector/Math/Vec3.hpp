#pragma once
#include <string>

namespace cw
{

	template<class T>
	 
	class Vec3
	{
	public:
		T x;
		T y;
		T z;

		

		Vec3() {};
		Vec3(T x, T y,T z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}

		~Vec3() {};

		Vec3 sum(const Vec3& v)
		{
			return Vec3(x + v.x, y + v.y, z+ v.z);
		}


		Vec3 minus(const Vec3& v)
		{
			return Vec3(x - v.x, y - v.y, z - v.z);
		}

		Vec3 divide(int s)
		{
			return Vec3(x / s, y / s, z / s);
		}

		Vec3 mul(int s)
		{
			return Vec3(x * s, y * s, z * s);
		}

		Vec3 operator*(int s)
		{
			return Vec3(x * s, y * s, z * s);
		}

 
		static float dotProduct(const Vec3& v , const Vec3& u)
		{


			return	(u.x*v.x) + (u.y*v.y) + (u.z*v.z);
			 
		}
 


		Vec3  crossProduct(const Vec3& u, const Vec3& v)
		{
			 
			return Vec3((u.y * v.z) - (u.z *v.y), ((u.z * v.x) - (u.x * v.z)), ((u.x * v.y) - (v.x* u.y)));

		}



		static float size(const Vec3& v)
		{
			float x, y,z, size;

			x = v.x; y = v.y; z = v.z;

			size = sqrtf((x * x) + (y * y) + (z * z));

			return size;

		}

		static float sizeSquare(const Vec3& u, const Vec3& v)
		{
			float x1, y1,z1,x2,y2,z2,vx,vy,vz, sizesq;

			x1 = u.x; y1 = u.y; z1 = u.z;
			x2 = v.x; y2 = v.y; z2 = v.z;
			vx = x2 - x1;
			vy = y2 - y1;
			vz = z2 - z1;
			sizesq = sqrtf((vx * vx) + (vy * vy) + (vz * vz));

			return sizesq;


		}

		static float  normX(const Vec3& v)
		{
		  	return v.x / sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z));

		}

		static float  normY(const Vec3& v)
		{
		 
			return v.y / sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z));

		}

		static float normZ(const Vec3& v)
		{
			return v.z / sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z));

		}


	};

	template <class T>
	Vec3<T> operator*(T s, const Vec3<T>& v)
	{
		return Vec3<T>(v.x * s, v.y * s, v.z * s);
	}


	typedef Vec3<int> Vec3i;
	typedef Vec3<int> Vec3ione;
	typedef Vec3<int> Vec3izero;
	typedef Vec3<float> Vec3f;
	typedef Vec3<double> Vec3d;

	



}
