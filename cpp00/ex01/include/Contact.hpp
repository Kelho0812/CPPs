/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:30:59 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/06 09:47:32 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <cstdio>
#include <string>


class Contact
{
  public:
	Contact();
	~Contact();
	void print_contact(void);
    std::string getFirstName() const { return first_name; }
    std::string getLastName() const { return last_name; }
    std::string getNickname() const { return nickname; }
    std::string getDarkestSecret() const { return darkest_secret; }
    int getPhoneNumber() const { return phone_number; }

  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	int phone_number;
};

#endif