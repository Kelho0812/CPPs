/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:34:14 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/19 16:34:14 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/AForm.hpp"
#include <iostream>

class Intern
{
  public:
	Intern(void);
	~Intern(void);
	Intern(Intern const &copy);
	Intern const &operator=(Intern const &copy);

	AForm *makeForm(const std::string &formType, const std::string &target);

  private:
	typedef AForm *(*FormCreator)(const std::string &target);

	static AForm *createRobotomyRequestForm(const std::string &target);
	static AForm *createShrubberyCreationForm(const std::string &target);
	static AForm *createPresidentialPardonForm(const std::string &target);

	static const std::string formTypes[3];
	static const FormCreator formCreators[3];	
};