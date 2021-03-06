/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:22:23 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/21 13:07:29 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	ScavTrap scav("MyScav");
	ClapTrap clap("MyClap");
	FragTrap frag("myFrag");
	FragTrap cpyFrag(frag);
	
	FragTrap deffy;
	
	deffy.setName("Deffy Default");

	scav.guardGate();
	frag.attack(scav.getName());
	frag.takeDamage(5000);
	scav.attack(deffy.getName());
	
	cpyFrag.highFivesGuys();
}