/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:10:40 by cadenegr          #+#    #+#             */
/*   Updated: 2024/12/11 12:19:49 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	bure1("Carlos", 2);
		std::cout << bure1 << std::endl;
		bure1.incrementGrade();
		std::cout << bure1 << std::endl;

		Bureaucrat	bure2("Adrian", 149);
		std::cout << bure2 << std::endl;
		bure2.decrementGrade();
		std::cout << bure2 << std::endl;

		// Bureaucrat	bure3("Too_low", 150);
		// std::cout << bure3 << std::endl;
		// bure3.decrementGrade();
		// std::cout << bure3 << std::endl;

		Bureaucrat	bure4("Too_high", 1);
		std::cout << bure4 << std::endl;
		bure4.incrementGrade();
		std::cout << bure4 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}