/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:45:46 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/10 13:01:31 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Print.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		currentIndex;
		int		contactCount;

	public:
		PhoneBook();
		void	addContact();
		void	searchContacts()const;
};

#endif