#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nick_name(""), phone_number(""), darkest_secret("") {}

std::string	Contact::get_f(void)
{
	return (this->first_name);
}

std::string	Contact::get_l(void)
{
	return (this->last_name);
}

std::string	Contact::get_n(void)
{
	return (this->nick_name);
}

std::string	Contact::get_p(void)
{
	return (this->phone_number);
}

std::string	Contact::get_d(void)
{
	return (this->darkest_secret);
}

void	Contact::set_f(std::string str)
{
	this->first_name = str;
}

void	Contact::set_l(std::string str)
{
	this->last_name = str;
}

void	Contact::set_n(std::string str)
{
	this->nick_name = str;
}

void	Contact::set_p(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_d(std::string str)
{
	this->darkest_secret = str;
}