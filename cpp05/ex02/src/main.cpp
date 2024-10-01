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
	Bureaucrat a("toni", 1);
	Bureaucrat b("ze", 1);
	try
	{
		a.signForm(f);
		b.signForm(f2);
		a.signForm(f3);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		a.executeForm(f);
		a.executeForm(f2);
		b.executeForm(f3);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
