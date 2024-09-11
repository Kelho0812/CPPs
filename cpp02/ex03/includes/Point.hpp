/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:58:10 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/24 08:58:10 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Fixed.hpp"

class Point {
private:
  Fixed x;
  Fixed y;

public:
	Point();
	Point(Fixed x, Fixed y);
	~Point();
	Point(const Point &old_point);
	Point &operator=(const Point &old_point);
	float GetX(void);
	float GetY(void);
};