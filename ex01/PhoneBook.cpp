/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-06 23:49:18 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-06 23:49:18 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

void	PhoneBook::AddContact(const std::string &first, const std::string &last, 
			const std::string &nick, const std::string &phone, 
			const std::string &secret)
{
	int	pos;
	
	pos = index % 8;
	contact_list[pos].set_f(first);
	contact_list[pos].set_l(last);
	contact_list[pos].set_n(nick);
	contact_list[pos].set_p(phone);
	contact_list[pos].set_d(secret);
	index++;
	std::cout << "Contact added at index " << pos + 1 << '\n';
}

void	PhoneBook::SearchContacts(int i)
{
	// if (contact_list[i].get_f().length() > 10)
	// 	contact_list[i].get_f() = contact_list[i].get_f().substr(0, 9) + ".";
	// if (contact_list[i].last_name.length() > 10)
	// 	contact_list[i].last_name = contact_list[i].last_name.substr(0, 9) + ".";
	// if (contact_list[i].nick_name.length() > 10)
	// 	contact_list[i].nick_name = contact_list[i].nick_name.substr(0, 9) + ".";
	// std::cout << "     Index|First Name| Last Name|  Nickname\n";
	// std::cout << "-------------------------------------------\n";
	// std::cout << std::setw(10) << i + 1 << '|'
	// 		<< std::setw(10) << contact_list[i].get_f() << '|'
	// 		<< std::setw(10) << contact_list[i].last_name << '|'
	// 		<< std::setw(10) << contact_list[i].nick_name << '\n';
	if (contact_list[i].get_f().length())
	{
		std::cout << "First name: " << contact_list[i].get_f() << '\n';
		std::cout << "Last name: " << contact_list[i].get_l() << '\n';
		std::cout << "Nick name: " << contact_list[i].get_n() << '\n';
		std::cout << "Phone number: " << contact_list[i].get_p() << '\n';
		std::cout << "Darkest secret: " << contact_list[i].get_d() << '\n';
	}
}

void	PhoneBook::SearchContacts2()
{
	int	i;
	std::string	first;
	std::string	last;
	std::string	nick;

	std::cout << "     Index|First Name| Last Name|  Nickname\n";
	std::cout << "-------------------------------------------\n";
	i = 0;
	while (i < 8)
	{
		if (contact_list[i].get_f().length() > 10)
			first = contact_list[i].get_f().substr(0, 9) + ".";
		else
			first = contact_list[i].get_f();
		if (contact_list[i].get_l().length() > 10)
			last = contact_list[i].get_l().substr(0, 9) + ".";
		else
			last = contact_list[i].get_l();
		if (contact_list[i].get_n().length() > 10)
			nick = contact_list[i].get_n().substr(0, 9) + ".";
		else
			nick = contact_list[i].get_n();
		if (contact_list[i].get_f().length())
		{
			std::cout << std::setw(10) << i + 1 << '|'
					<< std::setw(10) << first << '|'
					<< std::setw(10) << last << '|'
					<< std::setw(10) << nick << '\n';
		}
		i++;
	}
}