/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:17:00 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 12:06:03 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// #include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
/*	std::stringstream	ss;
	std::string			uniqueName;

	
	for (int i = 0; i < N; i++)
	{
		ss.str("");
		ss << name;
		if (i < 9)
			ss << "0";
		ss << (i + 1);
		uniqueName = ss.str();
		new (&horde[i]) Zombie(uniqueName);
	}
	return horde;*/
	for (int i = 0; i < N; i++)
		new (&horde[i]) Zombie(name);
	return horde;
}