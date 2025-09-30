/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:43:54 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/11 13:01:01 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Intern intern;
	Bureaucrat a("President", 5);
	std::cout << a << std::endl;
	Bureaucrat b("Governer", 50);
	std::cout << b << std::endl;
	Bureaucrat c("Mayor", 120);
	std::cout << c << std::endl;
	Bureaucrat d("Citizen", 148);
	std::cout << d << std::endl;

	std::cout << std::endl;

	// Create forms
	AForm* form1 = intern.makeForm("shrubbery creation", "home");
	AForm* form2 = intern.makeForm("robotomy request", "Bender");
	AForm* form3 = intern.makeForm("presidential pardon", "Alice");
	AForm* form4 = intern.makeForm("unknown form", "Target");

	std::cout << std::endl;

	// Sign and execute the forms if they were created successfully
	if (form1)
	{
		try
		{
			c.signForm(*form1);
			c.executeForm(*form1);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;

	if (form2)
	{
		try
		{
			b.signForm(*form2);
			b.executeForm(*form2);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;

	if (form3)
	{
		try
		{
			a.signForm(*form3);
			a.executeForm(*form3);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << std::endl;

	if (form1)
	{
		try
		{
			d.signForm(*form3);
			d.executeForm(*form3);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	// Clean up
	delete form1;
	delete form2;
	delete form3;
	delete form4;

	return 0;
}