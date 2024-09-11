/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:30:43 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/29 10:59:00 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
	ClapTrap clappy("clappy");
	clappy.attack("ABILIO");
	ScavTrap wowzers("Tonio");
	wowzers.attack("JOSEFINA");
	ScavTrap toni(wowzers);
	toni.attack("ABOBORA");
	return 0;
}