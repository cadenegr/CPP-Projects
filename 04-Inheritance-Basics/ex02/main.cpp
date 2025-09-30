/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:18:05 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/11 11:41:38 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	ClapTrap	clap;
	FragTrap	frag;
	ClapTrap	clap1("clappy");
	FragTrap	frag1("Frappy");
	ClapTrap	clap2;
	FragTrap	frag2;
	clap2 = ClapTrap("Clappo");
	frag2 = FragTrap("Frappo");

	std::cout << std::endl;

	clap.attack("frag");
	frag.takeDamage(5);
	frag.attack("clap");
	clap.takeDamage(20);
	clap.beRepaired(3);
	frag.beRepaired(3);

	std::cout << std::endl;

	clap1.attack("frag1");
	frag1.takeDamage(0);
	frag2.attack("clap2");
	clap2.takeDamage(30);
	clap2.beRepaired(3);
	frag1.beRepaired(3);
	frag.highFivesGuys();
	frag1.highFivesGuys();
	frag2.highFivesGuys();
	
	return 0;
}