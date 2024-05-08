/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:24:38 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/08 11:24:38 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int i = 0;
	Zombie *zombie;
	zombie = new Zombie[N]();
	while (i < N)
	{
		zombie[i].setName(name);
		i++;
	}
	return zombie;
}

void massDeletus(Zombie *zombie)
{
	delete[] zombie;
}