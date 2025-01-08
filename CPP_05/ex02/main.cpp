/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:43:54 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/11 12:49:03 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm shrub("home");
	std::cout << shrub << std::endl;
	RobotomyRequestForm robo("Bob");
	std::cout << robo << std::endl;
	PresidentialPardonForm pardon("Charlie");
	std::cout << pardon << std::endl;

	std::cout << std::endl;

	Bureaucrat alice("Alice", 6);
	std::cout << alice << std::endl;
	Bureaucrat bob("Bob", 44);
	std::cout << bob << std::endl;

	std::cout << std::endl;

	alice.signForm(shrub);
	alice.executeForm(shrub);

	std::cout << std::endl;

	bob.signForm(robo);
	bob.executeForm(robo);
	
	std::cout << std::endl;	

	alice.signForm(pardon);
	alice.executeForm(pardon);
	alice.incrementGrade();
	std::cout << alice << std::endl;
	alice.executeForm(pardon);

	return 0;
}

