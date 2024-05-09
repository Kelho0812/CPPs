/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:44:02 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/09 14:00:16 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon (std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
const std::string &Weapon::getType()
{
	return this->type;
}