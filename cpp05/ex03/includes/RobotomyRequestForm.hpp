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

class RobotomyRequestForm : public AForm
{
  private:
	RobotomyRequestForm(void);

  public:
	RobotomyRequestForm(const std::string &name);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &copyRobotomyRequestForm);
	RobotomyRequestForm const &operator=(RobotomyRequestForm const &copyRobotomyRequestForm);
	virtual void execute(Bureaucrat const &executor) const;
};
