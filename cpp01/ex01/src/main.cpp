/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:24:03 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/08 10:24:03 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
	Zombie *zombie;
	int zombie_num = 10;
	int i = 0;
	zombie = zombieHorde(zombie_num, "Toni");
	while (i < zombie_num)
	{
		zombie[i].announce();
		i++;
	}
	massDeletus(zombie);
	return 0;
}