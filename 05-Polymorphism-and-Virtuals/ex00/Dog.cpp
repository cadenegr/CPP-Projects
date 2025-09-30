/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:24:54 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 14:36:16 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Default
Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog created" << std::endl;
}
//Copy
Dog::Dog(const Dog &other)	:	Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}
//Assign operator
Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}
