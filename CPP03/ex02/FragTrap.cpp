/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:41:05 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/21 11:12:33 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

/* ********************** */
/*		Constructors	  */
/* ********************** */

FragTrap::FragTrap(): ClapTrap()
{
	this->_type = std::string("FragTrap");
	this->_hp = 100;
	this->_ep = 100;
	this->_attack = 30;
	std::cout << FRAG_COLOR "<default> ScavTrap constructed: It's alive... but what shall we call it?" FRAG_RESET <<std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_type = std::string("FragTrap");
	this->_hp = 100;
	this->_ep = 100;
	this->_attack = 30;
	std::cout << FRAG_COLOR "<" << _name << "> ScavTrap constructed: Maybe we should put a leash on this thing?!" FRAG_RESET <<std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) //copy
{
	this->_type = std::string("FragTrap");
	this->_hp = 100;
	this->_ep = 100;
	this->_attack = 30;
	std::cout << FRAG_COLOR "<" << _name << "> ScavTrap copy constructed: They're replicating?! AAH!" FRAG_RESET <<std::endl;
}

/* ********************** */
/*		Destructor		  */
/* ********************** */

/* ********************** */
/*		Operators		  */
/* ********************** */

	
/* ********************** */
/*		Methods			  */
/* ********************** */