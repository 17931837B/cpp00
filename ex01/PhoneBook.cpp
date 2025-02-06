#include "PhoneBook.hpp"

void	PhoneBook::AddContact(const std::string &first, const std::string &last, 
			const std::string &nick, const std::string &phone, 
			const std::string &secret)
{
	int	pos;
	
	pos = index % 8;
	contact_list[pos].first_name = first;
	contact_list[pos].last_name = last;
	contact_list[pos].nick_name = nick;
	contact_list[pos].phone_number = phone;
	contact_list[pos].darkest_secret = secret;
	index++;
	std::cout << "Contact added at index " << pos + 1 << '\n';
}

void	PhoneBook::SearchContacts(int i)
{
	// if (contact_list[i].first_name.length() > 10)
	// 	contact_list[i].first_name = contact_list[i].first_name.substr(0, 9) + ".";
	// if (contact_list[i].last_name.length() > 10)
	// 	contact_list[i].last_name = contact_list[i].last_name.substr(0, 9) + ".";
	// if (contact_list[i].nick_name.length() > 10)
	// 	contact_list[i].nick_name = contact_list[i].nick_name.substr(0, 9) + ".";
	// std::cout << "     Index|First Name| Last Name|  Nickname\n";
	// std::cout << "-------------------------------------------\n";
	// std::cout << std::setw(10) << i + 1 << '|'
	// 		<< std::setw(10) << contact_list[i].first_name << '|'
	// 		<< std::setw(10) << contact_list[i].last_name << '|'
	// 		<< std::setw(10) << contact_list[i].nick_name << '\n';
	std::cout << "First name: " << contact_list[i].first_name << '\n';
	std::cout << "Last name: " << contact_list[i].last_name << '\n';
	std::cout << "Nick name: " << contact_list[i].nick_name << '\n';
	std::cout << "Phone number: " << contact_list[i].phone_number << '\n';
	std::cout << "Darkest secret: " << contact_list[i].darkest_secret << '\n';
}

void	PhoneBook::SearchContacts2()
{
	int	i;

	std::cout << "     Index|First Name| Last Name|  Nickname\n";
	std::cout << "-------------------------------------------\n";
	i = 0;
	while (i < 8)
	{
		if (contact_list[i].first_name.length() > 10)
			contact_list[i].first_name = contact_list[i].first_name.substr(0, 9) + ".";
		if (contact_list[i].last_name.length() > 10)
			contact_list[i].last_name = contact_list[i].last_name.substr(0, 9) + ".";
		if (contact_list[i].nick_name.length() > 10)
			contact_list[i].nick_name = contact_list[i].nick_name.substr(0, 9) + ".";
		if (contact_list[i].first_name.length())
		{
			std::cout << std::setw(10) << i + 1 << '|'
					<< std::setw(10) << contact_list[i].first_name << '|'
					<< std::setw(10) << contact_list[i].last_name << '|'
					<< std::setw(10) << contact_list[i].nick_name << '\n';
		}
		i++;
	}
}