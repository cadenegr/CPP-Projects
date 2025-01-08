/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:43:50 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/14 12:44:46 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main()
{
	PhoneBook	phoneBook;
	Print		print;
	std::string command;

	while (true)
	{
			print.printString("Enter a command (ADD, SEARCH, EXIT): ");
			std::getline(std::cin, command);
		for (int i = 0; command[i]; i++)
			command[i] = std::toupper(command[i]);
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break;
		else
			print.printStringWithNewLine("Invalid command.");
		if (std::cin.eof())
		{
			std::cout << "End of input reached." << std::endl;
			break;
		}
		else if (std::cin.fail())
		{
			std::cout << "Input error occurred." << std::endl;
			break;
		}
    }

    return 0;
}