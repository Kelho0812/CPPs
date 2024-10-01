/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:41:27 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/19 15:41:27 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include <stdlib.h>
#include <cstdlib> 
#include <iostream> 
#include <time.h> 

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(target,	72, 45){}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() != true)
		throw(AForm::NotSignedException());
	else if (executor.getGrade() > this->getExecGrade())
		throw(Bureaucrat::GradeTooLowException());
	else
		std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy)
{
	*this = copy;
}
const PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	(void)copy;
	return *this;
}