/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:32:32 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/22 17:32:46 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Point.hpp"

class Triangle {

public:
  Triangle(const Point& pA, Point& pB, Point& pC);
  ~Triangle();
  Triangle (Triangle &old_triangle);
  Triangle &operator=(Triangle &old_triangle);
  Point GetA();
  Point GetB();
  Point GetC();

private:
  Point A;
  Point B;
  Point C;
};