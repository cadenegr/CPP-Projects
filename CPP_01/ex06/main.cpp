/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:14:49 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 11:23:15 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <algorithm>

int	main(int ac, char **av)
{
	switch(ac)
	{
		case 2:
			break;
		default:
			std::cerr << "Error! Usage: " << av[0] << " <log level>\n";
			return 1;
	}
	Harl	harl;
	std::string	upper_arg = av[1];
	std::transform(upper_arg.begin(), upper_arg.end(), upper_arg.begin(), ::toupper);
	harl.complain(upper_arg);
	return 0;
}