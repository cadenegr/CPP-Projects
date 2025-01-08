/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:35:50 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/08 17:50:39 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ch1;
	ClapTrap	ch2("Carlos");
	ClapTrap	ch3(ch1);
	ClapTrap	ch4 = ch2;

	ch1.attack("Carlos");
	ch2.takeDamage(12);
	ch2.beRepaired(3);
	ch2.attack("Noname");
	ch1.attack("Carlos");
	ch2.takeDamage(7);
	ch2.beRepaired(10);
	ch3.attack("Carlos");
	ch4.takeDamage(5);
	ch4.beRepaired(4);
	ch4.attack("Another");
	ch3.takeDamage(100);
	ch3.beRepaired(100);
	

	return 0;
}