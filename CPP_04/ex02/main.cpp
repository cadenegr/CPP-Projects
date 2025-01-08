/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:35:19 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 16:50:40 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	// This line will now cause a compile-time error
	// const Animal* animal = new Animal();

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	dog->makeSound(); // Should print "Woof woof"
	cat->makeSound(); // Should print "Meow meow"

	delete dog;
	delete cat;

	return 0;
}

