/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:12:46 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/08 17:20:40 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string			_name;
		unsigned int		_hitPoints;
		unsigned int		_energyPoints;
		unsigned int		_attackDamage;
	public:
		//Default constructor
		ClapTrap();
		//Copy contructor
		ClapTrap(const std::string &name);
		//Parameterized constructor
		ClapTrap(const ClapTrap &other);
		//Copy assignment operator
		ClapTrap& operator=(const ClapTrap &other);
		//Destructor
		~ClapTrap();
		
		//Member functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif