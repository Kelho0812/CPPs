/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:39:06 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/12 10:39:40 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int	main(void)
{
	RobotomyRequestForm f("abilio");
	PresidentialPardonForm f2("antonio");
	ShrubberyCreationForm f3("casa");
	Bureaucrat b("toni", 1);
	Bureaucrat c("ze", 1);
	try
	{
		f.beSigned(c);
		f2.beSigned(b);
		f3.beSigned(b);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		f.execute(b);
		f2.execute(b);
		f3.execute(b);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
