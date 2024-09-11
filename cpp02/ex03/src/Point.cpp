/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:58:16 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/24 08:58:16 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Point::~Point() {}

Point::Point(const Point &point)
{
	this->x = point.x;
	this->y = point.y;
}
Point &Point::operator=(const Point &point)
{
	this->x = point.x;
	this->y = point.y;
	return *this;
}

float Point::GetX() { return this->x.toFloat(); }

float Point::GetY() { return this->y.toFloat(); }