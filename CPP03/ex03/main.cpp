/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:22:23 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/21 13:08:21 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ScavTrap scav("MyScav");
	ClapTrap clap("MyClap");
	
	ScavTrap deffy;
	
	deffy.setName("Deffy Default");

	deffy.guardGate();
	scav.attack(clap.getName());
	scav.takeDamage(5000);
	scav.attack(deffy.getName());
	
}