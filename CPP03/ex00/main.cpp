/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:22:23 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/09 09:38:06 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout<< "\n[TESTING CONSTRUCTION]"<<std::endl;
	ClapTrap myTrap("My Trap");
	ClapTrap copyTrap(myTrap);
	ClapTrap defTrap;

	std::cout << "\n[TESTING MEMBER FUNCTIONS]"<<std::endl;
	defTrap.setName("defy default");
	myTrap.attack(copyTrap.getName());
	defTrap.attack(defTrap.getName());
	
	std::cout<< "\n[TESTING EP BLEED OUT]"<<std::endl;
	defTrap.attack(defTrap.getName());
	defTrap.beRepaired(5);
	defTrap.attack(defTrap.getName());
	defTrap.beRepaired(5);
	defTrap.attack(defTrap.getName());
	defTrap.beRepaired(5);
	defTrap.attack(defTrap.getName());
	defTrap.beRepaired(5);
	defTrap.attack(defTrap.getName());
	defTrap.beRepaired(5);
	defTrap.attack(defTrap.getName());

	std::cout<< "\n[TESTING HP BLEED OUT AND OVERKILL]"<<std::endl;

	myTrap.takeDamage(5000);
	myTrap.takeDamage(1);
	myTrap.attack(defTrap.getName());
	myTrap.beRepaired(5);
	std::cout<< "\n[TESTING DESTRUCTION]"<<std::endl;
}