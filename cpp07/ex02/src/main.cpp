/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:13:03 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/30 09:13:03 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int	main(void)
{
	try
	{
		Array<int> noSizeArray;
		Array<int> sizedArray(5);
		for (size_t i = 0; i < sizedArray.size(); ++i)
		{
			std::cout << sizedArray[i] << std::endl;
		}
		
		std::cout << sizedArray.size() << std::endl;
		noSizeArray = sizedArray;
		std::cout << noSizeArray.size() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}