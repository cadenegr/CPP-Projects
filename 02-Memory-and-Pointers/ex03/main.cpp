/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:25:13 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/15 13:28:56 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("sword");
		bob.attack();
	}
	{
		Weapon	club = Weapon("Heavy Mace");
		HumanB	jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("dagger");
		jim.attack();
	}
	return 0;
}