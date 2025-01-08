/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:24:44 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 14:36:10 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Default
Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat created" << std::endl;
}
//Copy
Cat::Cat(const Cat &other)	:	Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}
//Assign operator
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}