/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:46:11 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 13:28:16 by cadenegr         ###   ########.fr       */
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
		//Destructor, important to be virtual so it also destrcuts the derive classes
		virtual ~Animal();

		//Members
		//very important to use virtual or else the base will not be overide
		virtual	void	makeSound() const;
		std::string		getType() const;
};

#endif