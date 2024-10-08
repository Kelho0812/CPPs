/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:54:42 by jorteixe          #+#    #+#             */
/*   Updated: 2024/06/12 09:54:42 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_materias[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	AMateria *ptr; 
	for (int i = 0; i < 4; i++)
	{
		ptr = _materias[i];
		if (ptr != NULL)
			delete ptr;
		_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource &src)
{
    AMateria *ptr; 
	for (int i = 0; i < 4; i++)
	{
		ptr = _materias[i];
		if (ptr != NULL)
			delete ptr;
		if(src.getMateria(i))
			_materias[i] = src.getMateria(i)->clone();
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource &src)
{
	AMateria *ptr; 
	for (int i = 0; i < 4; i++)
	{
		ptr = _materias[i];
		if (ptr != NULL)
			delete ptr;
		if(src.getMateria(i))
			_materias[i] = src.getMateria(i)->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
	while (i < 4)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = m;
			break;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL)
		{
			if (_materias[i]->getType() == type)
			{
				return 	this->_materias[i]->clone();
			}
		}
	}
	return 0;
}
AMateria *MateriaSource::getMateria(int i)
{
    return(_materias[i]);
}