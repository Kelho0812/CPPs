/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:31:12 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/19 14:51:03 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm::AForm(void) : _name("defaultForm"), _signGrade(150), _execGrade(150), _isSigned(false)
{
	std::cout << "AForm Default Constructor called.\nName: " << this->getName() 
	<< std::endl;
}

AForm::AForm(std::string const &name, const int signGrade, const int execGrade):
_name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	if (signGrade < 0 || execGrade < 0)
	{
		throw(GradeTooHighException());
	}
	else if (signGrade > 150 || execGrade > 150)
	{
		throw(GradeTooLowException());
	}
	std::cout << "AForm Custom Constructor called.\nName: " << this->getName() 

	<< std::endl;
}

AForm::AForm(AForm const &copy) : _name(copy._name),_signGrade(copy._signGrade),_execGrade(copy._execGrade), _isSigned(copy._isSigned)
{
	*this = copy;
}

const AForm &AForm::operator=(const AForm &copy)
{
	if (this != &copy) {
		this->_isSigned = copy._isSigned;
	}
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm Default Destructor called.\nName: " << this->getName() << std::endl;
}


std::string const &AForm::getName(void) const
{
	return this->_name;	
}
int const &AForm::getSignGrade(void) const
{
	return this->_signGrade;
}
int const &AForm::getExecGrade(void) const
{
	return this->_execGrade;
}
const bool &AForm::getIsSigned(void) const { 
	return _isSigned;
}

void AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
	{
		throw(GradeTooLowException());
	}
	else
	{
		this->_isSigned = true;
	}
}


char const *AForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

char const *AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

char const *AForm::NotSignedException::what() const throw()
{
	return ("The form is not signed");
}