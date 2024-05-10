/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:12:23 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/10 15:27:41 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
using std::string;

enum level_enum
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
  public:
	void complain(string level);

  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};