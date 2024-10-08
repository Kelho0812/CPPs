/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:32:18 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/22 17:32:48 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Triangle.hpp"
#include "../includes/Point.hpp"

Triangle::Triangle(const Point& pA, Point& pB, Point& pC)
{
	this->A = pA;
	this->B = pB;
	this->C = pC;
}

Triangle::~Triangle()
{
}

Triangle::Triangle(Triangle &old_triangle)
{
	this->A = old_triangle.A;
	this->B = old_triangle.B;
	this->C = old_triangle.C;
}

Triangle &Triangle::operator=(Triangle &old_triangle)
{
	this->A = old_triangle.A;
	this->B = old_triangle.B;
	this->C = old_triangle.C;
	return *this;
}

Point Triangle::GetA()
{
	return this->A;
}
Point Triangle::GetB()
{
	return this->B;
}
Point Triangle::GetC()
{
	return this->C;
}