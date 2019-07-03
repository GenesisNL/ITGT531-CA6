#pragma once
#include <string>

namespace cw
{

	template<class T>

	class Vec1
	{
	public:
		T x;
		T y;
		T z;



		Vec1() {};
		Vec1(T x, T y, T z)
		{
			this->x = 1;
			this->y = 1;
			this->z = 1;
		}

	};

	 

}


