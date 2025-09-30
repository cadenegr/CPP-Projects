/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:47:34 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 13:27:59 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		//Default
		WrongAnimal();
		//Copy
		WrongAnimal(const WrongAnimal &other);
		//Operator assignment
		WrongAnimal &operator=(const WrongAnimal &other);
		//Destructor
		~WrongAnimal();
		
		//Members
		void		makeSound() const;
		std::string	getType() const;
};

#endif