/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:24:54 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 16:22:21 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//Default
Dog::Dog()	:	_brain(new Brain())
{
	_type = "Dog";
	std::cout << "Dog created" << std::endl;
}
//Copy
Dog::Dog(const Dog &other)	:	Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}
//Assign operator
Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}

Brain*		Dog::getBrain() const
{
	return _brain;
}