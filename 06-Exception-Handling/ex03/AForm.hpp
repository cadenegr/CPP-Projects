/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:46:41 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/11 13:16:14 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	protected:
		std::string			_target; //acces to derived classes
	public:
		//constructors
		AForm();
		AForm(const std::string& name, int gradeToSign, int gradeToExecute, const std::string& target);
		AForm(const AForm& other);
		AForm&	operator=(const AForm& other);
		virtual	~AForm();

		std::string		getName() const;
		bool			getIsSigned() const;
		int				getGradeToSign() const;
		int				getGradeToExecute() const;

		void			beSigned(const Bureaucrat& b);
		virtual	void	execute(Bureaucrat const& executor) const = 0; // Pure virtual method
		
		class	GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		class	FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
				virtual ~FormNotSignedException() throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif