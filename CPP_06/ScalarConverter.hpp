/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:12:57 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/19 13:11:27 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <limits.h>
#include <cstdlib> //strtod, strtol
#include <cmath> //isnan, isinf

class		ScalarConverter
{
	public:
		static	void	convert(const std::string& literal);
	private:
		//super unnecessary constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

		
		//fts
		static bool		isChar(const std::string& literal);
		static bool		isInt(const std::string& literal);
		static bool		isFloat(const std::string& literal);
		static bool		isDouble(const std::string& literal);
};

#endif