/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:28:19 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/14 16:37:17 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int N = 5;
	std::string name = "Walker";

	Zombie* horde = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;

	return (0);
}