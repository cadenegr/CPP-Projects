/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:39:11 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/08 13:00:34 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Constructors
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

// Comparison Operators
bool Fixed::operator>(const Fixed &rhs) const
{
	return this->_fixedPointValue > rhs._fixedPointValue;
}
bool Fixed::operator<(const Fixed &rhs) const
{
	return this->_fixedPointValue < rhs._fixedPointValue;
}
bool Fixed::operator>=(const Fixed &rhs) const
{
	return this->_fixedPointValue >= rhs._fixedPointValue;
}
bool Fixed::operator<=(const Fixed &rhs) const
{
	return this->_fixedPointValue <= rhs._fixedPointValue;
}
bool Fixed::operator==(const Fixed &rhs) const
{
	return this->_fixedPointValue == rhs._fixedPointValue;
}
bool Fixed::operator!=(const Fixed &rhs) const
{
	return this->_fixedPointValue != rhs._fixedPointValue;
}

// Arithmetic Operators
Fixed Fixed::operator+(const Fixed &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	if (rhs._fixedPointValue == 0)
	{
		std::cerr << "Error: Division by zero" << std::endl;
		return Fixed(0);
	}
	return Fixed(this->toFloat() / rhs.toFloat());
}

// Increment/Decrement Operators
Fixed &Fixed::operator++()
{
	++this->_fixedPointValue;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++this->_fixedPointValue;
	return temp;
}

Fixed &Fixed::operator--()
{
	--this->_fixedPointValue;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--this->_fixedPointValue;
	return temp;
}

// Getter and Setter
int Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

// Conversion Functions
float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return this->_fixedPointValue >> _fractionalBits;
}

// Min/Max Functions
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

// Output Stream Overload
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
