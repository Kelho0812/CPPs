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
	const std::string _target;
	const int _signGrade;
	const int _execGrade;
	bool _isSigned;

  public:
	AForm(void);
	virtual ~AForm(void);
	AForm(std::string const &name, std::string const &target, const int signGrade, const int execGrade);
	AForm(AForm const &copy);
	AForm const &operator=(AForm const &copy);

	const std::string &getName() const;
	const std::string &getTarget() const;
	int const &getSignGrade(void) const;
	int const &getExecGrade(void) const;
	bool const &getIsSigned(void) const;
	virtual void execute(Bureaucrat const & executor) const = 0;
	void beSigned(Bureaucrat bureaucrat);

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
	class NotSignedException : public std::exception
	{
		public:
		char const *what(void) const throw();
	};
};