/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-06 23:49:13 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-06 23:49:13 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

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
			pb.SearchContacts2();
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
