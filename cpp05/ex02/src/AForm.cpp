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
	std::cout << "Form Default Constructor called."	<< std::endl;
}

AForm::AForm(std::string const &name, std::string const &target, const int signGrade, const int execGrade):
_name(name), _target(target), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	if (signGrade < 1 || execGrade < 1)
	{
		throw(GradeTooHighException());
	}
	else if (signGrade > 150 || execGrade > 150)
	{
		throw(GradeTooLowException());
	}
	std::cout << "Form Custom Constructor called."	<< std::endl;
}

AForm::AForm(AForm const &copy) : _name(copy._name),_target(copy._target),_signGrade(copy._signGrade),_execGrade(copy._execGrade), _isSigned(copy._isSigned)
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
	std::cout << "AForm Default Destructor called." << std::endl;
}


std::string const &AForm::getName(void) const
{
	return this->_name;	
}

std::string const &AForm::getTarget(void) const
{
	return this->_target;	
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

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
	{
		throw(GradeTooLowException());
	}
	else
	{
		this->_isSigned = true;
		std::cout<< bureaucrat.getName() << " signed " << this->getName() << std::endl;
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

std::ostream &operator<<(std::ostream &str, AForm &form)
{
	return (str << "Form info:\n"
				<< "Name: " << form.getName() 
				<< "\nisSigned: " << form.getIsSigned() 
				<< "\nsignGrade: " << form.getSignGrade() 
				<< "\nexecGrade: " << form.getExecGrade() 
				<< std::endl);
}