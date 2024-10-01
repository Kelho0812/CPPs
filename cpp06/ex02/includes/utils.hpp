/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:32:39 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/27 09:32:39 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

Base	*generate(void)
{
	Base	*bp;
	int		num;

	srand(time(0));
	num = rand() % 3;
	switch (num)
	{
	case 0:
		bp = dynamic_cast<Base *>(new A);
		break ;
	case 1:
		bp = dynamic_cast<Base *>(new B);
		break ;
	case 2:
		bp = dynamic_cast<Base *>(new C);
		break ;
	default:
		throw std::runtime_error("Unexpected case in generate()");
		break ;
	}
	return (bp);
}

void	identify(Base *bp)
{
	if (dynamic_cast<A *>(bp) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(bp) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(bp) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (...)
	{
	}

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (...)
	{
	}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (...)
	{
	}

	std::cout << "Unknown" << std::endl;
}