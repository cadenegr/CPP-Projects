/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:29:10 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 11:54:25 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class	Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

	void	announce();
};

Zombie*	zombieHorde(int N, std::string name);

#endif