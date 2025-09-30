/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:24:44 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 16:24:12 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Default
Cat::Cat()	:	_brain(new Brain())
{
	_type = "Cat";
	std::cout << "Cat created" << std::endl;
}
//Copy
Cat::Cat(const Cat &other)	:	Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
}
//Assign operator
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return _brain;
}