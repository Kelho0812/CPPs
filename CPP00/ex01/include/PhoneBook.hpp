#include "../include/Contact.hpp"
#include <cstdlib>

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

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
	void add_contact_to_phonebook(void);
	void print_contact(void);
	void display_phonebook(void);
	void print_menu(bool first_time = false);
};

#endif