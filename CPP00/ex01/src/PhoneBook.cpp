#include "../include/PhoneBook.hpp"
#include <iostream>
#include <unistd.h>

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
	int i;

	i = 0;
	while (i < contacts_nr)
	{
		delete contacts[i];
		i++;
	}
}

int PhoneBook::contacts_nr = 0;
int PhoneBook::new_contact_index = 0;

void PhoneBook::add_contact_to_phonebook(void)
{
	if (contacts_nr < 8)
	{
		contacts_nr++;
	}
	if (new_contact_index > 7)
	{
		new_contact_index = 0;
	}
	contacts[new_contact_index] = new Contact;
	new_contact_index++;
	system("clear");
	std::cout << "Contact successfully added! Returning to the Main Menu!";
	sleep(1);
	system("clear");
	system("clear");
	system("clear");
	system("clear");
	system("clear");

	PhoneBook::print_menu();
}

void PhoneBook::print_contact(void)
{
	int i;

	i = 0;
	while (i < contacts_nr)
	{
		this->contacts[i]->print_contact();
		i++;
	}
}

void PhoneBook::search_phonebook(void)
{
}

void PhoneBook::print_menu(void)
{
	system("clear");
	std::cout << "Welcome to Vault 88 PhoneBook!" <<  std::endl;
	std::cout << "You are in: Main Menu" <<  std::endl;
	std::cout << "- Write 'ADD' to add a new contact to the PhoneBook" <<  std::endl;
	std::cout << "- Write 'SEARCH' to add a new contact to the PhoneBook" <<  std::endl;
	std::cout << "- Write 'EXIT' to exit the PhoneBook\n" <<  std::endl;
	std::cout << ">: ";
}