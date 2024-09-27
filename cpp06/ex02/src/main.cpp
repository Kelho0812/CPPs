/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:20:58 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/27 09:20:58 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.hpp"

int	main(void)
{
	Base *bp;
	bp = generate();
	identify(bp);
	identify(*bp);

	delete bp;
	return (0);
}