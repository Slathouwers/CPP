/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:41:05 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/21 11:51:37 by slathouw         ###   ########.fr       */
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

FragTrap::~FragTrap()
{
	std::cout << FRAG_COLOR "<" << _name << "> ScavTrap disintegrated! There's nothing left!" FRAG_RESET << std::endl;
}

/* ********************** */
/*		Operators		  */
/* ********************** */

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	_type = rhs._type;
	_name = rhs._name;
	_hp = rhs._hp;
	_ep = rhs._ep;
	_attack = rhs._attack;
	return (*this);
}

/* ********************** */
/*		Methods			  */
/* ********************** */

void FragTrap::highFivesGuys(void)
{
	std::cout << FRAG_COLOR "!" << _name << "! ScavTrap WANTS A HIGH FIVE GUYS! Who's in?!" FRAG_RESET << std::endl;
}