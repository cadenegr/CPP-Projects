/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:48:48 by cadenegr          #+#    #+#             */
/*   Updated: 2024/10/17 12:54:03 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void	replaceString(std::string& content, const std::string& s1, const std::string& s2)
{
	size_t	pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}	
}


int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: Usage: " << av[0] << " <filename> <string to replace> <replace string>" << std::endl;
		return 1;
	}
	std::string	filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cerr << "Error: The string arguments cannot be empty!" << std::endl;
		return 1;
	}
	std::ifstream	iF(filename.c_str());
	if (!iF.is_open())
	{
		std::cerr << "Error: Could not open the file!" << std::endl;
		return 1;
	}
	std::stringstream	buffer;
	buffer << iF.rdbuf();
	std::string	content = buffer.str();
	iF.close();

	replaceString(content, s1, s2);
	
	std::ofstream	outputFile((filename + ".replace").c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error! Could not create the output file!" << std::endl;
		return 1;
	}
	outputFile << content;
	outputFile.close();
	return 0;
}