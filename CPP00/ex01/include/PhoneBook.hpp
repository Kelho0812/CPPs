#include "../include/Contact.hpp"
#include <cstdlib>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
  private:
	Contact *contacts[8];
	static int contacts_nr;
	static int new_contact_index;

  public:
	PhoneBook();
	~PhoneBook();
	void add_contact_to_phonebook(void);
	void print_contact(void);
	void search_phonebook(void);
	void print_menu(void);
};

#endif