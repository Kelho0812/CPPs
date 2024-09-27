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
	Base *bp;
	srand(time(0));
	int num = rand() % 3;
	switch (num)
	{
	case 0:
		bp = new A;
		break ;

	case 1:
		bp = new B;
		break ;

	case 2:
		bp = new C;
		break ;
	default:
		throw std::runtime_error("Unexpected case in generate()");
		break ;
	}
	return (bp);
}