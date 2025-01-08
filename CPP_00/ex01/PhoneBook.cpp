/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:58:22 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/14 12:28:19 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include <string>


PhoneBook::PhoneBook() : currentIndex(0), contactCount(0) {}

void PhoneBook::addContact()
{
	Print	print;
	Contact	c;
	std::string	first, last, nick, phone, dark;

	c.setKeyWords();
	print.printString("Enter ");
	print.printString(c.fn);
	std::getline(std::cin, first);
	if (first.empty())
	{
		std::cout << "Phonebook must at least have a first name!" << std::endl;
		return ;
	}
	print.printString("Enter ");
	print.printString(c.ln);
	std::getline(std::cin, last);
	if (last.empty())
		last = "NONE";
	print.printString("Enter ");
	print.printString(c.nn);
	std::getline(std::cin, nick);
	if (nick.empty())
		nick = "NONE";
	print.printString("Enter ");
	print.printString(c.pn);
	std::getline(std::cin, phone);
	if (phone.empty())
		phone = "NONE";
	print.printString("Enter ");
	print.printString(c.ds);
	std::getline(std::cin, dark);
	if (dark.empty())
		dark = "NONE";

	contacts[currentIndex].setDetails(first, last, nick, phone, dark);
	currentIndex = (currentIndex + 1) % 8;
	if (contactCount < 8)
		contactCount++;
}

void PhoneBook::searchContacts() const
{
	Print	print;
	if (contactCount == 0)
	{
		print.printStringWithNewLine("Phonebook is empty"); 
		return;
	}
	std::stringstream ss;
	print.printTableRow("Index", "First Name", "Last Name", "Nick Name", 10);
	print.printSeparator('-', 10);
	for (int i = 0; i < contactCount; i++)
	{
		ss.str("");
		ss << (i + 1);
		print.printTableRow(ss.str(), contacts[i].getShortDetail(0), contacts[i].getShortDetail(1), contacts[i].getShortDetail(2), 10);
	}
	print.printSeparator('-', 10);

	int index = 0;
	std::string	str;
	print.printString("Enter index number to view details: ");
	std::getline(std::cin, str);
	std::stringstream convert(str);
	convert >> index;
	if (!index || !convert.eof() || str.empty())
		print.printStringWithNewLine("Invalid index!");
	else if (index < 1 || index > contactCount)
		print.printStringWithNewLine("Invalid index!");
	else
		contacts[index - 1].getFullDetail();
}