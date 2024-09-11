/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 10:19:58 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/07 10:19:58 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
	string _name;
	string _type;

  public:
	
	DiamondTrap();
	DiamondTrap(string _name);
	~DiamondTrap();
	DiamondTrap (const DiamondTrap&);
	DiamondTrap &operator=(const DiamondTrap&);
	using ScavTrap::attack;
	void whoAmI(void);

};
