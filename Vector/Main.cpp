// vectorlib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

 
#include <iostream>
#include "Math/Vec2.hpp"
#include "Math/Vec3.hpp"

#define CATCH_CONFIG_MAIN
#include "Thirdparty/catch2/catch.hpp"

using namespace cw;

Vec2i one2(1, 1);
Vec2i zero2(0, 0);
Vec2i n_one2 = one2;
Vec2i n_zero2 = zero2;

Vec3i one3(1, 1, 1);
Vec3i zero3(0, 0, 0);
Vec3i n_one3 = one3;
Vec3i n_zero3 = zero3;
 

 

 
TEST_CASE("It must passed", "[vector]")
{
	REQUIRE(true);
}

TEST_CASE("It should be initial correctly", "[vector]")
{
	Vec2i v(1, 1);

	REQUIRE(v.x == 1);
	REQUIRE(v.y == 1);
}

TEST_CASE("it can multiply with a scalar correctly", "[vector]")
{
	Vec2<int> v(1, 1);
	auto result = v.mul(3);
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}

TEST_CASE("it can multiply vector with a scalar with * ", "[vector]")
{
	Vec2<int> v(1, 1);
	auto result = v * 3;
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}

TEST_CASE("it can multiply a scalar with a vector with * ", "[vector]")
{
	Vec2<int> v(1, 1);
	auto result = 3 * v;
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}


TEST_CASE("SizeSquare", "[vector]")
{
	Vec2<int> v(1, 1);
	Vec2<int> u(1, 1);
	//auto result = Vec2<int>::sizeSquare(u,v);
	
}


 