/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:29:10 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 11:47:14 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class	Zombie
{
	private:
		std::string name; // Member variable to store the zombie's name
	public:
		Zombie(std::string name); // Constructor
		~Zombie(); // Destructor

	void	announce(); // Public method to announce the zombie's name
};

// Non-member functions
Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif