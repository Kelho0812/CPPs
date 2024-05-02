#include "../include/Contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
private:
	Contact* contacts[8];
	static int contacts_nr;
public:
	PhoneBook();
	~PhoneBook();
	void add_contact_to_phonebook(void);
	void print_contact(void);
};

#endif