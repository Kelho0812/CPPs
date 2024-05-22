#include "../includes/Point.hpp"

Point::Point()
{
    // Initialize x and y with some default values
    this->x = Fixed(0.0f);
    this->y = Fixed(0.0f);
}

Point::Point(Fixed x, Fixed y)
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
	return this->x.toFloat();
}

float Point::GetY()
{
	return this->y.toFloat();
}