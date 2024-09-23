/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:39:06 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/12 10:39:40 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat toni("toni", 151);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat toni("toni", 0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat toni("toni", 1);
		toni.gradeUp();
		
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat toni("toni", 150);
		toni.gradeUp();
		
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
