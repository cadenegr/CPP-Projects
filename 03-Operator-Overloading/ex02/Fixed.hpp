/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:35:17 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/08 12:31:49 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		Fixed &operator=(const Fixed &rhs);

		bool operator>(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;

	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;

	Fixed &operator++();// Pre-increment
	Fixed operator++(int);// Post-increment
	Fixed &operator--();// Pre-decrement
	Fixed operator--(int);// Post-decrement

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
