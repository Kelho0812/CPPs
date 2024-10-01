/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:42:56 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/17 13:42:56 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Bureaucrat;

class Form
{
  private:
	const std::string _name;
	const int _signGrade;
	const int _execGrade;
	bool _isSigned;

  public:
	Form(void);
	~Form(void);
	Form(std::string const &name, const int signGrade, const int execGrade);
	Form(Form const &copy);
	Form const &operator=(Form const &copy);

	std::string const &getName(void) const;
	int const &getSignGrade(void) const;
	int const &getExecGrade(void) const;
	bool getIsSigned(void);

	void beSigned(Bureaucrat &bureaucrat);

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