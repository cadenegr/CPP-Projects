/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:08:52 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/11 12:22:11 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
:	_name("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{}

Form::Form(const std::string name, bool isSigned, const int gradeToSign, const int gradeToExecute)
:	_name(name), _isSigned(isSigned), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& other)
:	_name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}

Form::~Form()
{}

std::string		Form::getName() const
{
	return _name;
}

bool			Form::getIsSigned() const
{
	return _isSigned;
}

int				Form::getGradeToSign() const
{
	return _gradeToSign;
}

int				Form::getGradeToExecute()const
{
	return _gradeToExecute;
}

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return " grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return " grade too low!";
}

std::ostream&	operator<<(std::ostream& os, const Form& f)
{
	os << "Form " << f.getName() << ", signed: "
	<< (f.getIsSigned() ? "yes" : "no")
	<< ", grade required to sign: " << f.getGradeToSign()
	<< ", grade required to execute: " << f.getGradeToExecute();

	return os;
}
	




