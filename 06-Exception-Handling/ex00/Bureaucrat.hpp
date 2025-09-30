/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:37:04 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/10 11:55:03 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class	Bureaucrat
{
	private:
		const	std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		//getters, get private variables
		std::string	getName() const;
		int			getGrade() const;
		
		//member fts
		void	incrementGrade();
		void	decrementGrade();

		//class within the class, for exceptions
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();	
		};
};

//overload operator
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif