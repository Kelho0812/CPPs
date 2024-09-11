/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:58:16 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/24 08:58:16 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Triangle.hpp"
#include "../includes/Point.hpp"

void checkIfPointInside(float w1, float w2, Triangle T, Point P)
{
	float Ax = T.GetA().GetX();
	float Bx = T.GetB().GetX();
	float Cx = T.GetC().GetX();
	float Ay = T.GetA().GetY();
	float By = T.GetB().GetY();
	float Cy = T.GetC().GetY();
	float Py = P.GetY();
	float Px = P.GetX();

	if (Px == Ax && Py == Ay) {
		Log("The Point is on Vertice A");
	}
	else if (Px == Bx && Py == By) {
		Log("The Point is on Vertice B");
	}
	else if (Px == Cx && Py == Cy) {
		Log("The Point is on Vertice C");
	}
	else if (w1 >= 0 && w2 >= 0 && (w1 + w2 < 1))
	{
		Log("The Point is inside the triangle");
	}
	else
	{
		Log("The Point is NOT inside the triangle");
	}
}