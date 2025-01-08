/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:53:47 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/14 12:21:13 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void		Contact::setKeyWords()
{
		fn = "First Name: ";
		ln = "Last Name: ";
		nn = "Nick Name: ";
		pn = "Phone Number: ";
		ds = "Darkest Secret: ";
}

void		Contact::setDetails(const std::string& first, const std::string& last, const std::string& nick, const std::string& phone, const std::string& dark)
{
	firstName = first;
	lastName = last;
	nickName = nick;
	phoneNumber = phone;
	darkestSecret = dark;
}

std::string	Contact::getShortDetail(int detailType) const
{
	std::string	detail;

	switch (detailType)
	{
		case 0: detail = firstName; break;
		case 1: detail = lastName; break;
		case 2: detail = nickName; break;
		default: detail = "";
	}
	if (detail.length() > 10)
		return detail.substr(0, 9) + ".";
	return detail;
}

void		Contact::getFullDetail() const
{
	Print	print;
	Contact c;
	
	c.setKeyWords();
	print.printSeparator('-', 10);
	print.printPhoneBookFormat(c.fn, firstName);
	print.printPhoneBookFormat(c.ln, lastName);
	print.printPhoneBookFormat(c.nn, nickName);
	print.printPhoneBookFormat(c.pn, phoneNumber);
	print.printPhoneBookFormat(c.ds, darkestSecret);
	print.printSeparator('-', 10);
}