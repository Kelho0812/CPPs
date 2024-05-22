#include "../includes/Point.hpp"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

Point::Point(const Point &point)
{
	this->x = point.x;
}
Point &Point::operator=(const Point &point)
{
	this->x = point.x;
	return *this;
}

float Point::GetX()
{
	return this->x;
}

float Point::GetY()
{
	return this->y;
}