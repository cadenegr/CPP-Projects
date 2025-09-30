/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:08:52 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/11 12:11:46 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
:	_name("default"), _gradeToSign(150), _gradeToExecute(150), _target("default")
{}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute, const std::string& target)
	:	_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
:	_name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}

AForm::~AForm()
{}



std::string		AForm::getName() const
{
	return _name;
}

bool			AForm::getIsSigned() const
{
	return _isSigned;
}

int				AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int				AForm::getGradeToExecute()const
{
	return _gradeToExecute;
}

void	AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return " is not signed!";
}

AForm::FormNotSignedException::~FormNotSignedException() throw()
{}

const char* AForm::GradeTooHighException::what() const throw()
{
	return " grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return " grade too low!";
}

std::ostream&	operator<<(std::ostream& os, const AForm& f)
{
	os << "AForm " << f.getName() << ", signed: "
	<< (f.getIsSigned() ? "yes" : "no")
	<< ", grade required to sign: " << f.getGradeToSign()
	<< ", grade required to execute: " << f.getGradeToExecute();

	return os;
}
