/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:03:30 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 14:36:02 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Default
Animal::Animal()	:	_type("Animal")
{
	std::cout << "Animal created" << std::endl;
}
//Copy
Animal::Animal(const Animal &other)	:	_type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}
//Assign operator
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}