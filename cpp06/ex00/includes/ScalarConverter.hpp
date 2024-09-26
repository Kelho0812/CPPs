/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:31:10 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/24 14:31:10 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./ParserUtils.hpp"

class ScalarConverter
{
  private:
	ScalarConverter(void);
	~ScalarConverter(void);
	ScalarConverter(ScalarConverter const &copy);
	ScalarConverter const &operator=(ScalarConverter const &copy);	
  public:
	static void convert(std::string literal);
};
