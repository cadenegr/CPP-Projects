/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:46:57 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 13:04:18 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class	Dog	:	public Animal
{
	public:
		//Default
		Dog();
		//Copy
		Dog(const Dog &other);
		//Operator assignment
		Dog &operator=(const Dog &other);
		//Destructor
		~Dog();
		
		//Members
		void	makeSound() const;
};

#endif