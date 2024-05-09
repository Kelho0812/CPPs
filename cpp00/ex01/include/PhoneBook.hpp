/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:30:59 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/07 10:38:03 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "../include/Contact.hpp"
#include <cstdlib>

class PhoneBook
{
  private:
	Contact *contacts[8];
	static int contacts_nr;
	static int new_contact_index;
	void print_table_row(std::string word1, std::string word2 = "",
						 std::string word3 = "", std::string word4 = "",
						 std::string word5 = "");

  public:
	PhoneBook();
	~PhoneBook();
	static int getContactsNumber()  { return contacts_nr; }
	void add_contact_to_phonebook(void);
	void print_contact(int index);
	void display_phonebook(void);
	void print_menu(int menu = 0, bool first_time = false);
};

#endif