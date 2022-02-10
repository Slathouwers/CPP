/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:36:20 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/10 09:03:28 by slathouw         ###   ########.fr       */
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
		std::cout << "<default> ScavTrap constructed: It's alive... but what shall we call it?"<<std::endl;
	}

	ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
	{
		this->_type = std::string("ScavTrap");
		this->_hp = 100;
		this->_ep = 50;
		this->_attack = 20;
		std::cout << "<" << _name << "> ScavTrap constructed: Maybe we should put a leash on this thing?!"<<std::endl;
	}
	
	ScavTrap::ScavTrap(ScavTrap const &rhs)
	{
		std::cout << "<" << _name << "> ScavTrap copy constructed: They're replicating?! AAH!"<<std::endl;
	}
	
/* ********************** */
/*		Destructor		  */
/* ********************** */

	ScavTrap::~ScavTrap()
	{
		std::cout << "<" << _name << "> ScavTrap disintegrated! There's nothing left!" << std::endl;
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
			<< "ScavTrap " << _name << " CAN NOT attack "<< target
			<< ", it has only "<< _hp <<" HP and "<<_ep <<" EP left." << std::endl;
			return ;
		}
		std::cout 
			<< "ScavTrap " << _name << " attacks "<< target
			<<", causing " << _attack << " points of damage!" << std::endl;
		_ep--;
	}
	
	void		ScavTrap::guardGate(void)
	{
		std::cout << "ScavTrap " << this->getName() << " have enterred in Gate keeper mode." << std::endl;
	}



