/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:35:17 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/08 11:00:48 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class	Fixed
{
	//member variables
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	//local variables
	public:
	 	// Default constructor
		Fixed();
		// Copy constructor
		Fixed(const Fixed &other);
		// Copy assignment operator
		Fixed& operator=(const Fixed &other);
		// Destructor
		~Fixed();
		
		// Getter for the raw fixed-point value
		int		getRawBits() const;
		// Setter for the raw fixed-point value
		void	setRawBits(int const raw);
};

#endif