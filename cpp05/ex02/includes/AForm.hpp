/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:  */
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

class AForm
{
  private:
	const std::string _name;
	const int _signGrade;
	const int _execGrade;
	bool _isSigned;

  public:
	AForm(void);
	~AForm(void);
	AForm(std::string const &name, const int signGrade, const int execGrade);
	AForm(AForm const &copy);
	AForm const &operator=(AForm const &copy);

	std::string const &getName(void) const;
	int const &getSignGrade(void) const;
	int const &getExecGrade(void) const;
	bool getIsSigned(void);

	void beSigned(Bureaucrat bureaucrat);

	class GradeTooHighException : public std::exception
	{
		public:
		virtual char const *what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual char const *what(void) const throw();
	};
};