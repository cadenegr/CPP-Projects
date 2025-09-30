/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:46:11 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 14:20:06 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

//base clase
class	Animal
{
	protected:
		std::string	_type;
	public:
		//Default
		Animal();
		//Copy
		Animal(const Animal &other)	;
		//Operator assignment
		Animal& operator=(const Animal &other);
		//Destructor, important to be virtual
		//because if not only the base class dest is called
		virtual ~Animal();

		//Members
		//very important to use virtual
		//allows derived classes to override it
		virtual	void	makeSound() const;
		std::string		getType() const;
};

#endif