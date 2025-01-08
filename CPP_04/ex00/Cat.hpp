/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:47:12 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 13:04:43 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class	Cat	:	public Animal
{
	public:
		//Default
		Cat();
		//Copy
		Cat(const Cat &other);
		//Operator assignment
		Cat &operator=(const Cat &other);
		//Destructor
		~Cat();
		
		//Members
		void	makeSound() const;
};

#endif