/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:34:26 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/19 16:34:37 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default Constructor called.";
}

Intern::~Intern(void)
{
	std::cout << "Intern Default Destructor called.";
}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

const Intern &Intern::operator=(Intern const &copy)
{
	(void)copy;
	return *this;
}

const std::string Intern::formTypes[3] = {
	"robotomy request",
	"shrubbery creation",
	"presidential pardon"
};

const Intern::FormCreator Intern::formCreators[3] = {
	&Intern::createRobotomyRequestForm,
	&Intern::createShrubberyCreationForm,
	&Intern::createPresidentialPardonForm
};

AForm *Intern::makeForm(const std::string &formType, const std::string &target)
{
	for (int i = 0; i < 3; ++i)
	{
		if (formTypes[i] == formType)
		{
			std::cout << "Intern creates " << formType << std::endl;
			return formCreators[i](target);
		}
	}
	std::cerr << "Unknown form type: " << formType << std::endl;
	return NULL;
}

AForm *Intern::createRobotomyRequestForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::createShrubberyCreationForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::createPresidentialPardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}