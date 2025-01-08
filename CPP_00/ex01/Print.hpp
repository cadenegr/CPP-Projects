/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:56:51 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/09 17:03:54 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRINT_HPP
#define	PRINT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class	Print
{
	public:
		void	printStringWithNewLine(const std::string &message) const;
		void	printString(const std::string &message) const;
		void	printPhoneBookFormat(const std::string &label, const std::string &value) const;
		void	printTableRow(const std::string &col1, const std::string &col2, const std::string &col3, const std::string &col4, int width) const;
		void	printSeparator(char character, int length) const;
};
#endif