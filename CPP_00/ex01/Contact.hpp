/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:50:14 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/14 12:19:42 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define	CONTACT_HPP

#include "Print.hpp"
#include <string>

class	Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		std::string	fn;
		std::string	ln;
		std::string	nn;
		std::string	pn;
		std::string	ds;
	
		void		setKeyWords();
		void		setDetails(const std::string& first, const std::string& last, const std::string& nick, const std::string& phone, const std::string& dark);
		std::string	getShortDetail(int detailType) const;
		void		getFullDetail() const;
};
#endif