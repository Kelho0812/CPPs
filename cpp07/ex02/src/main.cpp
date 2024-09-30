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
		sizedArray[0] = 0;
		sizedArray[1] = 1;
		sizedArray[2] = 2;
		sizedArray[3] = 3;
		sizedArray[4] = 4;
		for (size_t i = 0; i < sizedArray.size(); ++i)
		{
			std::cout << sizedArray[i] << std::endl;
		}
		
		std::cout << sizedArray.size() << std::endl;
		noSizeArray = sizedArray;
		std::cout << noSizeArray.size() << std::endl;
		Array<char> charArray(5);
		std::cout << charArray.size() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}