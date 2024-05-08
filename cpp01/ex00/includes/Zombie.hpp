/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:23:53 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/08 10:23:53 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
class Zombie
{
  public:
	void announce(void);
	void goodbye(void);
	Zombie();
	Zombie(std::string name);
	~Zombie();

  private:
	std::string name;
};

Zombie *newZombie(std::string name);
void randomChump( std::string name );