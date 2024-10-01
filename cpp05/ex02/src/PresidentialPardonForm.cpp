/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:04:32 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/19 16:09:24 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <time.h>

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialForm",
	"defaultTarget", 25, 5)
{
	std::cout << "PresidentialForm Default Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialForm",
	target, 25, 5)
{
	std::cout << "PresidentialForm Custom Constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialForm Default Destructor called." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() != true)
		throw(AForm::NotSignedException());
	else if (executor.getGrade() > this->getExecGrade())
		throw(Bureaucrat::GradeTooLowException());
	else
	{
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy)
{
	*this = copy;
}
const PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	(void)copy;
	return (*this);
}