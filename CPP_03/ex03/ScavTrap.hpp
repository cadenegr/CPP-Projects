/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:48:43 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/11 13:32:56 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class	ScavTrap	:	virtual public ClapTrap
{
	public:
		//Default constructor
		ScavTrap();
		//Copy contructor
		ScavTrap(const ScavTrap &other);
		//Parameterized constructor
		ScavTrap(const std::string &name);
		//Copy assignment operator
		ScavTrap& operator=(const ScavTrap &other);
		//Destructor
		~ScavTrap();
	
		//Member functions
		void	attack(const std::string &target);
		void	guardGate();
};

#endif