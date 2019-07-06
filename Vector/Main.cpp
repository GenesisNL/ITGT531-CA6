// vectorlib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Math/Vec2.hpp"
#include "Math/Vec3.hpp"

#define CATCH_CONFIG_MAIN

#include "Thirdparty/catch2/catch.hpp"

using namespace cw;

//set one vector ,zero vector and copy construct of 2d vector
Vec2i one2(1, 1);
Vec2i zero2(0, 0);
Vec2i n_one2 = one2;
Vec2i n_zero2 = zero2;
//set one vector ,zero vector and copy construct of 3d vector
Vec3i one3(1, 1, 1);
Vec3i zero3(0, 0, 0);
Vec3f zero3f(0, 0, 0);
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

TEST_CASE("Sum function(vector2d)", "[vector]")
{
	 
	Vec2i u(2, 2);
	auto result = one2.sum(u);

	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);

}
TEST_CASE("Minus function(vector2d)", "[vector]")
{
	Vec2i v(3, 3);
	Vec2i u(2, 2);
	auto result = v.minus(u);

	REQUIRE(result.x == 1);
	REQUIRE(result.y == 1);

}
TEST_CASE("Divide function(vector2d)", "[vector]")
{
	Vec2i v(2, 2);
	 
	auto result = v.divide(2);

	REQUIRE(result.x == 1);
	REQUIRE(result.y == 1);

}




TEST_CASE("Multiply function (vector2d)", "[vector]")
{	Vec2i v(1, 1);
	 
	auto result = v.mul(3);

	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);

}

TEST_CASE("it can multiply vector with a scalar with * (vector2d)", "[vector]")
{
	Vec2<int> v(1, 1);
	auto result = v * 3;
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
}




TEST_CASE("Size function(vector2d)", "[vector]")
{

	Vec2f v(3, 4);

	auto result = Vec2<float>::size(v);

	REQUIRE(result == 5);


}
 
TEST_CASE("Size square function(vector2d)", "[vector]")
{
	Vec2f u(1, 1);
	Vec2f v(1, 3);

	auto result = Vec2<float>::sizeSquare(u,v);

	REQUIRE(result == 2);


}
 
TEST_CASE("normX function(vector2d)", "[vector]")
{
	Vec2f u(3, 4);
	 

	auto result = Vec2<float>::normX(u);

	REQUIRE(result == 0.6f);


}
 
TEST_CASE("normY function(vector2d)", "[vector]")
{
	Vec2f u(3, 4);


	auto result = Vec2<float>::normY(u);

	REQUIRE(result == 0.8f);


}
//3d vector test case

TEST_CASE("It should be initial correctly 3dvector ", "[vector3]")
{
	Vec3i v(1, 1,1);

	REQUIRE(v.x == 1);
	REQUIRE(v.y == 1);
	REQUIRE(v.z == 1);
}

TEST_CASE("Sum function(vector3d)", "[vector]")
{

	Vec3i u(2, 2, 2);

	auto result = one3.sum(u);

	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
	REQUIRE(result.z == 3);

}




 
TEST_CASE("Minus function(vector3d)", "[vector3]")
{
	Vec3i v(3, 3,3);
	Vec3i u(2, 2,2);
	auto result = v.minus(u);

	REQUIRE(result.x == 1);
	REQUIRE(result.y == 1);
	REQUIRE(result.z == 1);

}
TEST_CASE("Divide function(vector3d)", "[vector3]")
{
	Vec3i v(2, 2,2);

	auto result = v.divide(2);

	REQUIRE(result.x == 1);
	REQUIRE(result.y == 1);
	REQUIRE(result.z == 1);

}




TEST_CASE("Multiply function (vector3d)", "[vector3]")
{
	Vec3i v(1, 1,1);

	auto result = v.mul(3);

	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
	REQUIRE(result.z == 3);
}

TEST_CASE("it can multiply vector with a scalar with * (vector3d)", "[vector3]")
{
	Vec3<int> v(1, 1,1);
	auto result = v * 3;
	REQUIRE(result.x == 3);
	REQUIRE(result.y == 3);
	REQUIRE(result.z == 3);

}


TEST_CASE("Size function(vector3d)", "[vector]")
{

	Vec3f v(62 , 87,43);

	auto result = Vec3<float>::size(v);

	REQUIRE(result == sqrtf(13262.0f));


}

TEST_CASE("Size square function(vector3d)", "[vector]")
{
	Vec3f u(69, 1,45);
	Vec3f v(84, 8,34);

	auto result = Vec3<float>::sizeSquare(u, v);

	REQUIRE(result == sqrtf(395.0f));


}
 
TEST_CASE("normX function(vector3d)", "[vector]")
{
	Vec3f u( 11, 70,98);


	auto result = Vec3<float>::normX(u);

	REQUIRE(result == 11/sqrtf(14625.0f));


}

TEST_CASE("normY function(vector3d)", "[vector]")
{
	Vec3f u(11, 70, 98);


	auto result = Vec3<float>::normY(u);

	REQUIRE(result == 70 / sqrtf(14625.0f));


}

TEST_CASE("normZ function(vector3d)", "[vector]")
{
	Vec3f u(11, 70, 98);


	auto result = Vec3<float>::normZ(u);

	REQUIRE(result == 98 / sqrtf(14625.0f));


}
TEST_CASE("dot product function(vector3d)", "[vector]")
{
			
	Vec3f u(1, 2, 3);
	Vec3f v(1, 5, 7);

	auto result = Vec3<float>::dotProduct(u,v);

	REQUIRE(result == 32.0f);


}


TEST_CASE("crossProduct function(vector3d)", "[vector]")
{

	Vec3i u(1, 2, 3);
	Vec3i v(1, 5, 7);

	auto result = v.crossProduct(u, v);

	REQUIRE(result.x == -1);
	REQUIRE(result.y == -4);
	REQUIRE(result.z == 3);


}




//test minus value 
TEST_CASE("dot product function zero value (vector3d)", "[vector]")
{

	Vec3f u(-1, 2, 3);
	 

	auto result = Vec3<float>::dotProduct(u, zero3f);

	REQUIRE(result == 0.0f);


}

