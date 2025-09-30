/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <neo_dgri@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:09:49 by cadenegr          #+#    #+#             */
/*   Updated: 2024/11/11 13:43:10 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	d1("Alpha");
	DiamondTrap d2("Beta");

	d1.attack("Beta");
	d1.whoAmI();

	d2 = d1;
	d2.whoAmI();

	DiamondTrap d3(d1);
	d3.whoAmI();

	return 0;
}