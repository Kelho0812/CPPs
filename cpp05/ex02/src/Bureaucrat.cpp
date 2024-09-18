/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:44 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/11 15:13:44 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

Bureaucrat::Bureaucrat(void) : _name("defaultBureaucrat"), _grade(150)
{
	std::cout << "Bureaucrat Default Constructor called.\nName: " << this->getName() <<
		"\nGrade:" << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
	this->_name = name;
	if (grade < 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	else if (grade > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
	this->_grade = grade;
	std::cout << "Bureaucrat Custom Constructor called.\nName: " << this->getName() <<
		"\nGrade:" << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

const Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy) {
		this->_name = copy._name;
		this->_grade = copy._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default Destructor called.\nName: " << this->getName() << std::endl;
}

const std::string &Bureaucrat::getName() const
{
	return this->_name;
}

const int &Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::gradeDown()
{
	if (this->_grade == 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

void Bureaucrat::gradeUp()
{
	if (this->_grade == 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
}

void Bureaucrat::signForm(AForm f)
{
	try
	{
		f.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << f.getName() << " because " <<  e.what() << '\n';
	}
	
}

char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat)
{
	return (str << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".");
}