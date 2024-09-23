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
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int	main(void)
{
	Intern someRandomIntern;
	Bureaucrat someRandomBureaucrat("randoBureau", 1);
	AForm* robotomy_form;
	robotomy_form = someRandomIntern.makeForm("robotomy request", "R1");
	someRandomBureaucrat.signForm(*robotomy_form);
	robotomy_form->execute(someRandomBureaucrat);
	delete robotomy_form;
}
