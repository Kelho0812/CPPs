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

class ShrubberyCreationForm: AForm
{
	ShrubberyCreationForm(const std::string &name, int signGrade, int execGrade) : AForm(name, signGrade, execGrade) {}


};