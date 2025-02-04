#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include "Contact.hpp"

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
