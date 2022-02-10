/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:22:23 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/10 09:07:29 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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