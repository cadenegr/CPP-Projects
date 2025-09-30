/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:08:41 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/11 10:11:42 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clap("Clappy");
	ScavTrap	scav("Scavvy");
	
	std::cout << std::endl;
	
	clap.attack("target");
	clap.takeDamage(9);
	clap.beRepaired(4);

	std::cout << std::endl;

	scav.attack("target");
	scav.takeDamage(40);
	scav.beRepaired(20);
	scav.guardGate();

	std::cout << std::endl;

	return 0;
}