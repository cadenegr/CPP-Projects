/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:35:19 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 14:29:15 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* tier = new Animal();
	const Animal* doggy = new Dog();
	const Animal* catty = new Cat();
	// Animal	anotherAnimal;
	// Dog	anotherDog;
	// Cat	anotherCat;
	

	std::cout << doggy->getType() << " " << std::endl;
	std::cout << catty->getType() << " " << std::endl;
	// std::cout << anotherAnimal.getType() << " " << std::endl;
	// std::cout << anotherDog.getType() << " " << std::endl;
	// std::cout << anotherCat.getType() << " " << std::endl;

	catty->makeSound(); // Will output the cat sound
	doggy->makeSound(); // Will output the dog sound
	tier->makeSound(); // Will output the animal sound
	// anotherAnimal.makeSound();
	// anotherDog.makeSound();
	// anotherCat.makeSound();

	delete tier;
	delete doggy;
	delete catty;

	std::cout << "----- WrongAnimal Test -----" << std::endl;

	const WrongAnimal* wrongTier = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound(); // Will output the WrongAnimal sound, not WrongCat

	delete wrongTier;
	delete wrongCat;

	return 0;
}
