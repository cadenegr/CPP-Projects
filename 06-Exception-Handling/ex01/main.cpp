/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:46:58 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/11 12:32:49 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat john("John", 41);
		std::cout << john << std::endl;
		Form taxForm("Tax Form No.1", false, 41, 150);

		std::cout << taxForm << std::endl;
		john.signForm(taxForm);
		std::cout << taxForm << std::endl;

		std::cout << std::endl;

		Bureaucrat pedro("Perdo", 31);
		std::cout << pedro << std::endl;
		Form taxForm2("Tax Form No.2", false, 30, 50);

		std::cout << taxForm2 << std::endl;
		pedro.signForm(taxForm2);
		std::cout << taxForm2 << std::endl;
		pedro.incrementGrade();
		std::cout << pedro << std::endl;
		pedro.signForm(taxForm2);
		std::cout << taxForm2 << std::endl;

		std::cout << std::endl;

		Bureaucrat pancho("Pancho", 231);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
