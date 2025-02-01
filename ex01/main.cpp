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
	if (contact_list[i].first_name.length() > 9)
		contact_list[i].first_name = contact_list[i].first_name.substr(0, 9) + ".";
	if (contact_list[i].last_name.length() > 9)
		contact_list[i].last_name = contact_list[i].last_name.substr(0, 9) + ".";
	if (contact_list[i].nick_name.length() > 9)
		contact_list[i].nick_name = contact_list[i].nick_name.substr(0, 9) + ".";
	std::cout << "     Index|First Name| Last Name|  Nickname\n";
	std::cout << "-------------------------------------------\n";
	std::cout << std::setw(10) << i + 1 << '|'
			<< std::setw(10) << contact_list[i].first_name << '|'
			<< std::setw(10) << contact_list[i].last_name << '|'
			<< std::setw(10) << contact_list[i].nick_name << '\n';
}

int main()
{
	PhoneBook	pb;
	std::string	command, first, last, nick, phone, secret;;

	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> command;
		if (std::cin.fail())
		{
			if (std::cin.eof())
				break ;
			std::cout << "Invalid input." << '\n';
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue ;
		}
		else if (command == "ADD")
		{
			std::cout << "First Name: ";
			std::cin >> first;
			if (std::cin.fail())
			{
				if (std::cin.eof())
					break ;
				std::cout << "Invalid input." << '\n';
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue ;
			}
			std::cout << "Last Name: ";
			std::cin >> last;
			if (std::cin.fail())
			{
				if (std::cin.eof())
					break ;
				std::cout << "Invalid input." << '\n';
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue ;
			}
			std::cout << "Nick Name: ";
			std::cin >> nick;
			if (std::cin.fail())
			{
				if (std::cin.eof())
					break ;
				std::cout << "Invalid input." << '\n';
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue ;
			}
			std::cout << "Phone Number: ";
			std::cin >> phone;
			if (std::cin.fail())
			{
				if (std::cin.eof())
					break ;
				std::cout << "Invalid input." << '\n';
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue ;
			}
			std::cout << "Darkest Secret: ";
			std::cin >> secret;
			if (std::cin.fail())
			{
				if (std::cin.eof())
					break ;
				std::cout << "Invalid input." << '\n';
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue ;
			}
			pb.AddContact(first, last, nick, phone, secret);
		} 
		else if (command == "SEARCH")
		{
			std::cout << "Enter index (1~8): ";
			int	index;
			std::cin >> index;
			if (std::cin.fail() || index < 1 || index > 8)
			{
				if (std::cin.eof())
					break ;
				std::cout << "Wrong index\n";
				continue ;
			}
			pb.SearchContacts(index - 1);
		} 
		else if (command == "EXIT")
		{
			std::cout << "Thank you. ";
			break;
		}
		else
			std::cout << "Invalid command! Try again.\n";
	}
	std::cout << '\n';
	return (0);
}
