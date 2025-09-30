/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:05 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 16:29:00 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
	const Animal* animals[4];

	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	std::cout << "----- Testing Array of Animals -----" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
	}

	// Setting and getting ideas for Dog objects
	Dog* dog1 = new Dog();
	dog1->getBrain()->setIdea(0, "Chase the ball");
	dog1->getBrain()->setIdea(1, "Bark at the door");

	std::cout << "Dog 1 ideas:" << std::endl;
	std::cout << dog1->getBrain()->getIdea(0) << std::endl; // Get the first idea
	std::cout << dog1->getBrain()->getIdea(1) << std::endl; // Get the second idea

	// Setting and getting ideas for Cat objects
	Cat* cat1 = new Cat();
	cat1->getBrain()->setIdea(0, "Chase the mouse");
	cat1->getBrain()->setIdea(1, "Sleep on the couch");

	std::cout << "Cat 1 ideas:" << std::endl;
	std::cout << cat1->getBrain()->getIdea(0) << std::endl; // Get the first idea
	std::cout << cat1->getBrain()->getIdea(1) << std::endl; // Get the second idea

	std::cout << "----- Deleting Animals -----" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}

	std::cout << "----- Deep Copy Test -----" << std::endl;
	Dog dog2;
	dog2.makeSound();

	Dog dog3 = dog2; // Copy constructor
	dog3.makeSound();

	dog2 = dog3; // Assignment operator
	dog2.makeSound();

	delete dog1;
	delete cat1;

	return 0;
}

