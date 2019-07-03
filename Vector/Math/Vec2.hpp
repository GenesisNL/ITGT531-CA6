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
      return Vec2(x+v.x, y+v.y);
    }

    Vec2 mul(int s)
    {
      return Vec2(x*s, y*s);
    }

    Vec2 operator*(int s) 
    {
      return Vec2(x*s, y*s);
    }

  };

  template <class T>
  Vec2<T> operator*(T s, const Vec2<T>& v)
  {
    return Vec2<T>(v.x * s, v.y*s);
  }

  typedef Vec2<int> Vec2i;
  typedef Vec2<float> Vec2f;
  typedef Vec2<double> Vec2d;

}
