/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:53 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/11 15:15:44 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Form;

class Bureaucrat
{
  private:
	const std::string _name;
	int _grade;

  public:
	Bureaucrat(void);
	~Bureaucrat(void);
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat const &operator=(Bureaucrat const &copy);

	std::string const &getName(void) const;
	int const &getGrade(void) const;

	void gradeUp(void);
	void gradeDown(void);

	void signForm(Form f);

	class GradeTooHighException : public std::exception
	{
		public:
		char const *what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		char const *what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &str, Bureaucrat const &bureaucrat);