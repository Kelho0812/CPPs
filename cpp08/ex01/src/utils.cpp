/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:40:58 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/02 14:40:58 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.hpp"

std::vector<int> generateVector(unsigned int num)
{
	std::vector<int> genericVector;

	srand(time(0));

	for (unsigned int i = 0; i < num; i++)
		genericVector.push_back(rand());

	return (genericVector);
}