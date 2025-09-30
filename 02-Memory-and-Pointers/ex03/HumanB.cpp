/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:20:37 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 12:39:30 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with a " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon!" << std::endl;
}