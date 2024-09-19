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

#include <iostream>

class Intern
{
	Intern(void);
	~Intern(void);
	Intern(Intern const &copy);
	Intern const &operator=(Intern const &copy);
};