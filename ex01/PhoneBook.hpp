#ifndef MAIN_H
# define MAIN_H

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
		Contact() : first_name(""), last_name(""), nick_name(""), phone_number(""), darkest_secret("") {};
};

class PhoneBook
{
	private:
		Contact contact_list[8];
		int index;
	public:
		PhoneBook() : index(0) {};
		void	AddContact(const std::string &first, const std::string &last, 
						const std::string &nick, const std::string &phone, 
						const std::string &secret);
		void	SearchContacts(int i);
};

#endif
