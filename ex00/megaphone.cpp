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

int	ft_isalpha_small(int chara)
{
	if ((chara >= 'a' && chara <= 'z'))
		return (1);
	else
		return (0);
}

void	megaphone(char *sentence)
{
	int	j;

	j = 0;
	while (sentence[j])
	{
		if (ft_isalpha_small(sentence[j]))
			std::cout << (char)(sentence[j] + ('A' - 'a'));
		else
			std::cout << sentence[j];
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