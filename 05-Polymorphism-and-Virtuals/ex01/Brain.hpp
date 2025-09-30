/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:42:52 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/12 14:11:37 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		~Brain();

		void		setIdea(int index, const std::string &idea);
		std::string	getIdea(int index) const;
};

#endif