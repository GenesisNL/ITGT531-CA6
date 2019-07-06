#pragma once
#include <string>

namespace cw
{

	template<class T>
	class Vec2
	{
	public:
		T x;
		T y;

		Vec2() {};
		Vec2(T x, T y)
		{
			this->x = x;
			this->y = y;
		}

		~Vec2() {};

		Vec2 sum(const Vec2& v)
		{
			return Vec2(x + v.x, y + v.y);
		}


		Vec2 minus(const Vec2& v)
		{
			return Vec2(x - v.x, y - v.y);
		}

		Vec2 divide(int s)
		{
			return Vec2(x / s, y / s);
		}

		Vec2 mul(int s)
		{
			return Vec2(x * s, y * s);
		}

		Vec2 operator*(int s)
		{
			return Vec2(x * s, y * s);
		}



		static float size(const Vec2& v)
		{
 
			float x, y, size;

			x = v.x; y = v.y;

			size = sqrtf((x * x) + (y * y));

			return size;

		}

		static float sizeSquare(const Vec2& u, const Vec2& v)
		{
			float x1, y1, x2, y2, vx, vy, sizesq;

			x1 = u.x; y1 = u.y;
			x2 = v.x; y2 = v.y;
			vx = x2 - x1;
			vy = y2 - y1;
			sizesq = sqrtf((vx * vx) + (vy * vy));
			return sizesq;

		}


	 

		static float normX(const Vec2& v)
		{

		 	return  v.x / sqrtf((v.x * v.x) + (v.y * v.y));

 
		}

		static float normY(const Vec2& v)
		{
			  
			return v.y / sqrtf((v.x * v.x) + (v.y * v.y));
 
		}

	 



	};

	template <class T>
	Vec2<T> operator*(T s, const Vec2<T>& v)
	{
		return Vec2<T>(v.x * s, v.y * s);
	}

	typedef Vec2<int> Vec2i;


	typedef Vec2<float> Vec2f;
	typedef Vec2<double> Vec2d;

}
