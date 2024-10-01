/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:41:27 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/19 15:41:27 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <cstdlib> 
#include <iostream> 
#include <time.h> 

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyForm",	72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyForm",	72, 45){}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() != true)
		throw(AForm::NotSignedException());
	else if (executor.getGrade() > this->getExecGrade())
		throw(Bureaucrat::GradeTooLowException());
	else
	{
		std::cout << "** DRILLINGZZZ **" << std::endl;
		srand(time(0));
		int num = rand() % 2;
		if (num == 0)
			std::cout << getName() << " was robotomized." << std::endl;
		else
			std::cout << "Robotomy failed." << std::endl;
	}
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm(copy)
{
	*this = copy;
}
const RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
	(void)copy;
	return *this;
}