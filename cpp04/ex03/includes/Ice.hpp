/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 09:10:12 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/05 11:42:54 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
  public:
	Ice();
	Ice(const Ice& originalIce);
	~Ice();
	Ice& operator=(const Ice& originalIce);
	std::string const& getType() const;
	virtual AMateria	*clone(void) const;	
	void use(ICharacter& target);
};

#endif