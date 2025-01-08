/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:51:42 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/14 16:10:36 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	z1("Walker");
	z1.announce();
	Zombie	z2 = z1;
	z2.announce();
	Zombie	z3("Undead");
	z3.announce();
	randomChump("Temporal");
	Zombie* heapZombie = newZombie("Muerto");
	heapZombie->announce();

	delete heapZombie;

	return 0;
}