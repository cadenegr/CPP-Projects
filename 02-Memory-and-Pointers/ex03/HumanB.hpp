/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:11:50 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 12:38:03 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define	HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class	HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& weapon);
		void	attack();
};

#endif