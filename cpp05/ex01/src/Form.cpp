/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:41:30 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/17 13:41:30 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form::Form(void) : _name("defaultForm"), _signGrade(150), _execGrade(150), _isSigned(false)
{
	std::cout << "Form Default Constructor called.\nName: " << this->getName() 
	<< "\nSign Grade:" << this->getSignGrade() 
	<< "\nExec Grade" << this->getExecGrade() 
	<< std::endl;
}

Form::Form(std::string const &name, const int signGrade, const int execGrade):
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
	std::cout << "Form Custom Constructor called.\nName: " << this->getName() 
	<< "\nSign Grade: " << this->getSignGrade() 
	<< "\nExec Grade: " << this->getExecGrade() 
	<< std::endl;
}

Form::Form(Form const &copy) : _name(copy._name),_signGrade(copy._signGrade),_execGrade(copy._execGrade), _isSigned(copy._isSigned)
{
	*this = copy;
}

const Form &Form::operator=(const Form &copy)
{
	if (this != &copy) {
		this->_isSigned = copy._isSigned;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Form Default Destructor called.\nName: " << this->getName() << std::endl;
}


std::string const &Form::getName(void) const
{
	return this->_name;	
}
int const &Form::getSignGrade(void) const
{
	return this->_signGrade;
}
int const &Form::getExecGrade(void) const
{
	return this->_execGrade;
}
bool Form::getIsSigned(void)
{
	return this->_isSigned;
}

void Form::beSigned(Bureaucrat &bureaucrat)
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


char const *Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

char const *Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

std::ostream &operator<<(std::ostream &str, Form &form)
{
	return (str << "Form info:\n"
				<< "Name: " << form.getName() 
				<< "\nisSigned: " << form.getIsSigned() 
				<< "\nsignGrade: " << form.getSignGrade() 
				<< "\nexecGrade: " << form.getExecGrade() 
				<< std::endl);
}