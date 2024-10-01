/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:21:53 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/18 14:21:53 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>  

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyForm", "Target", 145, 137)
{
	std::cout << "ShrubberyForm Default Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyForm", target,	145, 137)
{
	std::cout << "ShrubberyForm Custom Constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyForm Custom Destructor called." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() != true)
		throw(ShrubberyCreationForm::NotSignedException());
	else if (executor.getGrade() > this->getExecGrade())
		throw(Bureaucrat::GradeTooLowException());
	else
	{
		std::cout<< executor.getName() << " executed " << this->getName() << std::endl;
		std::ofstream outfile ((this->getTarget() + "_shrubbery").c_str());

			for (int i = 0; i < 3; i++)
			{
			outfile <<
				"     &" << std::endl <<
				"   &&&&&" << std::endl <<
				"  &&&|&&&" << std::endl <<
				" &&&&|&&&&" << std::endl <<
				"&&&&&|&&&&&" << std::endl <<
				"&&&&&|&&&&&" << std::endl <<
				"  &&&|&&&" << std::endl <<
				"    { }" << std::endl <<
				"    { }" << std::endl <<
				"    { }" << std::endl <<
				std::endl;
		}
		outfile.close();
	}
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy)
{
	*this = copy;
}
const ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	(void)copy;
	return *this;
}