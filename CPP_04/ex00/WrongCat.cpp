/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:34:11 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 14:36:32 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Default
WrongCat::WrongCat()
{
	_type = "Wrong Cat";
	std::cout << "WrongCat created" << std::endl;
}
//Copy
WrongCat::WrongCat(const WrongCat &other)	:	WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}
//Assign operator
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "I can not meow" << std::endl;
}