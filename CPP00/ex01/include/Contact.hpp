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
	void print_all_contacts(void);

  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	int phone_number;
};

#endif