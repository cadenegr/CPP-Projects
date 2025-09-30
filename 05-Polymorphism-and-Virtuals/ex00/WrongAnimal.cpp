/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:31:09 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 14:36:25 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

//Default
WrongAnimal::WrongAnimal()	:	_type("Wrong Animal")
{
	std::cout << "WrongAnimal created" << std::endl;
}
//Copy
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}
//Assign operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}