/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:36:20 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/21 11:38:45 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

/* ********************** */
/*		Constructors	  */
/* ********************** */

	ScavTrap::ScavTrap() : ClapTrap()
	{
		this->_type = std::string("ScavTrap");
		this->_hp = 100;
		this->_ep = 50;
		this->_attack = 20;
		std::cout << SCAV_COLOR "<default> ScavTrap constructed: It's alive... but what shall we call it?" SCAV_RESET <<std::endl;
	}

	ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
	{
		this->_type = std::string("ScavTrap");
		this->_hp = 100;
		this->_ep = 50;
		this->_attack = 20;
		std::cout << SCAV_COLOR "<" << _name << "> ScavTrap constructed: Maybe we should put a leash on this thing?!" SCAV_RESET <<std::endl;
	}
	
	ScavTrap::ScavTrap(ScavTrap const &rhs)
	{
		this->_type = rhs._type;
		this->_hp = rhs._hp;
		this->_ep = rhs._hp;
		this->_name = rhs._name;
		std::cout << SCAV_COLOR "<" << _name << "> ScavTrap copy constructed: They're replicating?! AAH!" SCAV_RESET <<std::endl;
	}
	
/* ********************** */
/*		Destructor		  */
/* ********************** */

	ScavTrap::~ScavTrap()
	{
		std::cout << SCAV_COLOR "<" << _name << "> ScavTrap disintegrated! There's nothing left!" SCAV_RESET << std::endl;
	}

/* ********************** */
/*		Operators		  */
/* ********************** */

	ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

	void ScavTrap::attack(const std::string &target)
	{
		if (! _hp || ! _ep)
		{
			std::cout 
			<< SCAV_COLOR "ScavTrap " << _name << " CAN NOT attack "<< target
			<< ", it has only "<< _hp <<" HP and "<<_ep <<" EP left." SCAV_RESET << std::endl;
			return ;
		}
		std::cout 
			<< SCAV_COLOR "ScavTrap " << _name << " attacks "<< target
			<<", causing " << _attack << " points of damage!" SCAV_RESET << std::endl;
		_ep--;
	}
	
	void		ScavTrap::guardGate(void)
	{
		std::cout << SCAV_COLOR "ScavTrap " << this->getName() << " have enterred in Gate keeper mode." SCAV_RESET << std::endl;
	}