/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-06 23:48:59 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-06 23:48:59 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

void	megaphone(char *sentence)
{
	int	j;
	std::string	str;

	j = 0;
	while (sentence[j])
	{
		str = toupper(sentence[j]);
		std::cout << str;
		j++;
	}
}

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv[i])
		{
			megaphone(argv[i]);
			i++;
		}
		std::cout << '\n';
	}
	return (0);
}
