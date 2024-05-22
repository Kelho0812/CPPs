#include "../includes/Triangle.hpp"
#include "../includes/Point.hpp"

Triangle::Triangle(Point A, Point B, Point C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}

Triangle::~Triangle()
{
}

Triangle::Triangle(Triangle &old_triangle)
{
	this->A = old_triangle.A;
	this->A = old_triangle.B;
	this->A = old_triangle.C;
}

Triangle &Triangle::operator=(Triangle &old_triangle)
{
	this->A = old_triangle.A;
	this->A = old_triangle.B;
	this->A = old_triangle.C;
	return *this;
}

Point Triangle::GetA()
{
	return A;
}
Point Triangle::GetB()
{
	return B;
}
Point Triangle::GetC()
{
	return C;
}