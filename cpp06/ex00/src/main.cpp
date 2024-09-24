/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:30:46 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/24 14:30:46 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

int main(int argc, char const *argv[])
{
	if (argc > 2)
		throw std::invalid_argument("Too many arguments.");
	else if (argc < 2)
		throw std::invalid_argument("Too few arguments.");
	(void)argv;
	return 0;
}
