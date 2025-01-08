/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:04:52 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/09 17:13:49 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Print.hpp"
#include <iostream>
#include <iomanip>
#include <string>

void	Print::printStringWithNewLine(const std::string &message) const
{
	std::cout << message << std::endl;
}
void	Print::printString(const std::string &message) const
{
	std::cout << message;
}
void	Print::printPhoneBookFormat(const std::string &label, const std::string &value) const
{
	std::cout << label << value << std::endl;
}
void	Print::printTableRow(const std::string &col1, const std::string &col2, const std::string &col3, const std::string &col4, int width) const
{
	std::cout << "|" << std::setw(width) << col1 << "|"
	<< std::setw(width) << col2 << "|"
	<< std::setw(width) << col3 << "|"
	<< std::setw(width) << col4 << "|" << std::endl;
}
void	Print::printSeparator(char character, int length) const
{
	std::cout << std::string((length * 4 + 5), character) << std::endl;
}