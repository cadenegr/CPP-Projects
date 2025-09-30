/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:37:56 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/11 13:19:24 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
	:	AForm("PresidentialPardonForm", 145, 137, "Default")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("PresidentialPardonForm", 25, 5, target)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
		_target = other._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}


void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (not getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	
	std::cout << _target << " has been pardon by Zaphod Beeblebrox." << std::endl;
}