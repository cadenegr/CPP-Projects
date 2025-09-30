/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:47:08 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/11 12:04:28 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern&)
{}

Intern& Intern::operator=(const Intern&)
{
	return *this;
}
Intern::~Intern()
{}

AForm* createShrubberyForm(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* createRobotomyForm(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

AForm* createPresidentialForm(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

AForm*	Intern::makeForm(const std::string& formName, const std::string& target) const
{
	typedef AForm* (*FormCreator)(const std::string&);

	const std::string	formTypes[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	FormCreator creators[] = {
		createShrubberyForm,
		createRobotomyForm,
		createPresidentialForm
	};
	for (size_t i = 0; i < 3; ++i)
	{
		if (formName == formTypes[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return creators[i](target);
		}
	}
	std::cerr << "Error: Form type \"" << formName << "\" not recognized." << std::endl;
	return NULL;
}