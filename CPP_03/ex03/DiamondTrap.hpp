/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:50:38 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/11 13:41:56 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class	DiamondTrap	:	virtual public ScavTrap , virtual public FragTrap
{
	private:
		std::string	_name; //Shadow Claptrap's name
	public:
		//Default constructor
		DiamondTrap();
		//Copy contructor
		DiamondTrap(const DiamondTrap &other);
		//Parameterized constructor
		DiamondTrap(const std::string &name);
		//Copy assignment operator
		DiamondTrap& operator=(const DiamondTrap &other);
		//Destructor
		~DiamondTrap();

		void	attack(const std::string &target);
		void	whoAmI();
};

#endif