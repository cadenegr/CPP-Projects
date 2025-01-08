/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:52:51 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/15 11:08:13 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	//normal variable
	std::string		string = "HI THIS IS BRAIN";
	//pointer
	std::string*	stringPTR = &string;
	//reference
	std::string&	stringREF = string;

	std::cout << "The memory address of the string variable: " << &string << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The value of the string variable: " << string << std::endl;
	std::cout << "The value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed by stringREF: " << stringREF << std::endl;


	return 0;
}