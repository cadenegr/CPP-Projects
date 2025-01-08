/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:46:57 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 16:21:29 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class	Dog	:	public Animal
{
	private:
		Brain	*_brain;
	public:
		//Default
		Dog();
		//Copy
		Dog(const Dog &other);
		//Operator assignment
		Dog &operator=(const Dog &other);
		//Destructor
		virtual ~Dog();
		
		//Members
		void	makeSound() const;
		//getter
		Brain*	getBrain() const;
};

#endif