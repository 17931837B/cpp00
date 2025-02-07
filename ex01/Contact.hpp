#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		std::string	get_f();
		std::string	get_l();
		std::string	get_n();
		std::string	get_p();
		std::string	get_d();
		void	set_f(std::string str);
		void	set_l(std::string str);
		void	set_n(std::string str);
		void	set_p(std::string str);
		void	set_d(std::string str);
};

#endif