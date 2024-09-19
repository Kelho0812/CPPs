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

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target,	145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() != true)
	{
		throw(ShrubberyCreationForm::NotSignedException());
	}
	else if (executor.getGrade() > this->getExecGrade())
	{
		std::cout << "NOT ENOUGH BITCH";
	}
	else
	{
		std::ofstream outfile ((this->getName() + "_shrubbery").c_str());

			for (int i = 0; i < 3; i++)
			{
			outfile <<
				"   &&" << std::endl <<
				"  &&&&&" << std::endl <<
				"&&&&|&&&&" << std::endl <<
				"&&&&|&&&&" << std::endl <<
				"&&&&|&&&&" << std::endl <<
				"&&&&|&&&&" << std::endl <<
				" &&&|&&&" << std::endl <<
				"   { }" << std::endl <<
				"   { }" << std::endl <<
				"   { }" << std::endl <<
				std::endl;
		}
		outfile.close();
	}
	
}