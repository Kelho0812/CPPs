/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:30:46 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/24 14:30:46 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ScalarConverter.hpp"

int	main(int argc, char const *argv[])
{
	try
	{
		checkArgNum(argc);
		ScalarConverter::convert(argv[1]);
	}
	catch (const std::invalid_argument &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
