/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:50:50 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/19 13:22:20 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//private constructors (non-instantiable)
ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& other){}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){}
ScalarConverter::~ScalarConverter(){}

void	ScalarConverter::convert(const std::string& literal)
{
		
}

bool	ScalarConverter::isChar(const std::string& literal)
{
	return	literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]);
}

bool	ScalarConverter::isInt(const std::string& literal)
{
	char*	end;
	long	value = strtol(literal.c_str(), &end, 10);
	return *end == '\0' && value >= INT_MIN && value <= INT_MAX;
}

bool	ScalarConverter::isFloat(const std::string& literal)
{
	
}

bool	ScalarConverter::isDouble(const std::string& literal)
{
	char* 	end;
	double	d = strtod(literal.c_str(), &end);
	return *end
}

