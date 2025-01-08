/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:57:03 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/11 13:46:58 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Default constr
ScavTrap::ScavTrap()	:	ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

//Parameterized constructor
ScavTrap::ScavTrap(const std::string &name)	:ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap parameterized constructor called for " << _name << std::endl;
}

//Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other)	:	ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

//Copy assginment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << _name << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!_energyPoints || !_hitPoints)
	{
		std::cout << _name << " has no energy or hit points left to attack!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! Which is okay." <<std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap" << _name << "is now in Gatekeeper mode!" << std::endl;
}
