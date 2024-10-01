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

class ShrubberyCreationForm : public AForm
{
  private:
	ShrubberyCreationForm(void);

  public:
	ShrubberyCreationForm(const std::string &name);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &copyShrubberyCreationForm);
	ShrubberyCreationForm const &operator=(ShrubberyCreationForm const &copyShrubberyCreationForm);
	virtual void execute(Bureaucrat const &executor) const;
};
