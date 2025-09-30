/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:10:32 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/09 16:19:00 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

void	megaMethod(int ac, char **av)
{
	switch (ac)
	{
		case	1:
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
			break;
		default:
			for (int i = 1; i < ac; i++)
				for(int j = 0; av[i][j]; j++)
					std::cout << (char)std::toupper(av[i][j]);
			std::cout << std::endl;
			break;
	}
}

int	main (int ac, char **av)
{
	megaMethod(ac, av);
	return (0);
}