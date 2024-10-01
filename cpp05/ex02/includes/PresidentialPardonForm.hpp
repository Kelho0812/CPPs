/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:19:55 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/18 14:19:59 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AForm.hpp"

class PresidentialPardonForm : public AForm
{
  private:
	PresidentialPardonForm(void);

  public:
	PresidentialPardonForm(const std::string &name);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copyPresidentialPardonForm);
	PresidentialPardonForm const &operator=(PresidentialPardonForm const &copyPresidentialPardonForm);
	virtual void execute(Bureaucrat const &executor) const;
};
