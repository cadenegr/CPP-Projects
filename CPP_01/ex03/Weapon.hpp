/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:55:42 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 12:34:48 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		const	std::string&	getType() const;
		void	setType(const std::string& newtype);
};

#endif