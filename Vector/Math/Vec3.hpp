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




		Vec3 cross(const Vec3& v)
		{
			 
			return Vec3(x - v.x, y - v.y, z - v.z);
		}


		Vec3 dotProduct(const Vec3& v , const Vec3& u)
		{

			int a1, b1, c1, a2, b2, c2, dot;

			a1 = u.x; b1 = u.y; c1 = u.z;
			a2 = v.x; b2 = v.y; c2 = v.z;
		 
			dot =(a1*a2)+(b1*b2)+(c1*c2) ;

			return dot;

		}
 


		Vec3 crossProduct(const Vec3& u, const Vec3& v)
		{

			 
			int a, b, c, d, e, f,iv,jv,kv;

			a = u.x; b = u.y; c = u.z;
			d = v.x; e = v.y; f = v.z;
			iv = (b * f) - (e * c);
			jv = (-1) * ((a * f) - (d * c));
			kv = (-1) * ((a * e) - (d * b));

			if (jv > 0 && kv > 0) {
				return std::cout << iv << "i + " << jv << "j +" << kv << "k";
			}
			else if (jv > 0) {
				return std::cout << iv << "i + " << jv << "j" << kv << "k";
			}
			else if (kv > 0) {
				return std::cout << iv << "i " << jv << "j +" << kv << "k";
			}
			else {
				return std::cout << iv << "i " << jv << "j" << kv << "k";
			}


		}

		Vec3 size(const Vec3& v)
		{
			float x, y,z, size;

			x = v.x; y = v.y; z = v.z;

			size = sqrt((x * x) + (y * y) + (z * z));
			return size;

		}

		Vec3 sizeSquare(const Vec3& u, const Vec3& v)
		{
			float x1, y1,z1,x2,y2,z2,vx,vy,vz, sizesq;

			x1 = u.x; y1 = u.y; z1 = u.z;
			x2 = v.x; y2 = v.y; z2 = u.z;
			vx = x2 - x1;
			vy = y2 - y1;
			vz = z2 - z1;
			sizesq = sqrt((vx * vx) + (vy * vy) + (vz * vz));
			return sizesq;


		}

		Vec3 norm(const Vec3& v)
		{
			float x, y, z,size, xn,yn,zn;

			x = v.x; y = v.y; z = v.z;

			size = sqrt((x * x) + (y * y) + (z * z));
				xn = x / size;
				yn = y / size;
				zn = z / size;
				return xn, yn, zn;
			


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
