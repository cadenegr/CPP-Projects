/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:54:29 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 11:26:40 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = 
	{
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	int	index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			index = i;
			break;
		}
	}
	switch(index)
	{
		case 0:
			this->debug();
			std::cout << std::endl;
		case 1:
			this->info();
			std::cout << std::endl;
		case 2:
			this->warning();
			std::cout << std::endl;
		case 3:
			this->error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}