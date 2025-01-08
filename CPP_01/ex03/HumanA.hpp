/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:07:44 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 12:35:46 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define	HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack();
};

#endif