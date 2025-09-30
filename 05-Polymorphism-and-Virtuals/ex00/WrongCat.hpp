/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:47:47 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 13:05:46 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class	WrongCat	:	public WrongAnimal
{
	public:
		//Default
		WrongCat();
		//Copy
		WrongCat(const WrongCat &other);
		//Operator assignment
		WrongCat &operator=(const WrongCat &other);
		//Destructor
		~WrongCat();
		
		//Members
		void	makeSound() const;
};

#endif