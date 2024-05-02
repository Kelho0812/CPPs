#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

int PhoneBook::contacts_nr = 0;

void PhoneBook::add_contact_to_phonebook(void)
{
	if (contacts_nr == 7)
	{
		contacts_nr = 0;
	}
	contacts[contacts_nr] = new Contact;
	contacts_nr++;
}

void PhoneBook::print_contact(void)
{
	this->contacts[0]->print_contact();
}