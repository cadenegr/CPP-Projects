/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:03:07 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 12:34:54 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{}

const	std::string&	Weapon::getType() const
{
	return type;
}

void	Weapon::setType(const std::string& newType)
{
	type = newType;
}