/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:03:27 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/11 12:00:48 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:	AForm("ShrubberyCreationForm", 145, 137, "Default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	:	AForm("ShrubberyCreationForm", 145, 137, target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		_target = other._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (not getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	
	std::ofstream	file((_target + "_shrubbery").c_str());
	file << "   *    *  ()   *   *" << std::endl
	<< "*        * /\\         *" <<std::endl
	<< "      *   /i\\\\    *  *" <<std::endl
	<< "    *     o/\\\\  *      *" <<std::endl
	<< "*        ///\\i\\    *" <<std::endl
	<< "     *   /*/o\\\\  *    *" <<std::endl
	<< "   *    /i//\\*\\      *" <<std::endl
	<< "        /o/*\\\\i\\   *" <<std::endl
	<< "  *    //i//o\\\\\\\\     *" <<std::endl
	<< "    * /*////\\\\\\\\i\\*" <<std::endl
	<< " *    //o//i\\\\*\\\\\\   *" <<std::endl
	<< "   * /i///*/\\\\\\\\\\o\\   *" <<std::endl
	<< "  *    *   ||     *     *" <<std::endl;
	file.close();
}