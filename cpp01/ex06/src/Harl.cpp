/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:09:14 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/10 15:13:38 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"
#include <iostream>
#define RED "\x1B[31m"
#define ORANGE "\x1B[91m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"

using std::cout;
using std::endl;

void Harl::complain(string level)
{
	int i = 0;
	void (Harl::*complain_level_funcs[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	string complain_level_text[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4)
	{
		if (level == complain_level_text[i])
		{
			switch (i)
			{

				case 0:
				{
					while (i < 4)
					{
						(this->*complain_level_funcs[i])();
						i++;
					}
					return;
				}
				case 1:
				{
					while (i < 4)
					{
						(this->*complain_level_funcs[i])();
						i++;
					}
					return;
				}
				case 2:
				{
					while (i < 4)
					{
						(this->*complain_level_funcs[i])();
						i++;
					}
					return;
				}
				case 3:
				{
					while (i < 4)
					{
						(this->*complain_level_funcs[i])();
						i++;
					}
					return;
				}

					return;
			}
		}
		i++;
	}
	cout << "*Angry Harl noises*" << endl;
}

void Harl::debug(void)
{
	cout << YEL "DEBUG: " RESET
		 << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup "
			"burger. I really do!"
		 << endl;
}
void Harl::info(void)
{
	cout
		<< "INFO: "
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon "
		   "in my burger! If you did, I wouldn’t be asking for more!"
		<< endl;
}
void Harl::warning(void)
{
	cout << ORANGE "WARNING: " RESET
		 << "I think I deserve to have some extra bacon for free. I’ve been coming for years "
			"whereas you started working here since last month."
		 << endl;
}
void Harl::error(void)
{
	cout << RED "ERROR: " RESET << "This is unacceptable! I want to speak to the manager now."
		 << endl;
}

