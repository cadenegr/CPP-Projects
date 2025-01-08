/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:44:49 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/11 13:37:33 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class	FragTrap	:	virtual public ClapTrap
{
	public:
		//defualt
		FragTrap();
		//copy
		FragTrap(const FragTrap &other);
		//parameter
		FragTrap(const std::string &name);
		//operator assignment
		FragTrap &operator=(const FragTrap &other);
		//destoryer
		~FragTrap();

		//memebers
		void	attack(const std::string &target);
		void	highFivesGuys(void);
};

#endif