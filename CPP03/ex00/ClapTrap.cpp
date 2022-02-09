/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:12:58 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/09 09:36:14 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ********************** */
/*		Constructors	  */
/* ********************** */

	ClapTrap::ClapTrap() //default
	: _name(std::string()), _hp(10), _ep(10), _attack(0)
	{
		std::cout << "<default> ClapTrap constructed: It's alive... but what shall we call it?"<<std::endl;
	}

	ClapTrap::ClapTrap(std::string name)
	: _name(name), _hp(10), _ep(10), _attack(0)
	{
		std::cout << "<" << _name << "> ClatpTrap constructed: Maybe we should put a leash on this thing?!"<<std::endl;
	}

	ClapTrap::ClapTrap(ClapTrap const &rhs) //copy
	: _name(rhs._name), _hp(rhs._hp), _ep(rhs._ep), _attack(rhs._attack)
	{
		std::cout << "<" << _name << "> ClatpTrap copy constructed: They're replicating?! AAH!"<<std::endl;
	}

/* ********************** */
/*		Destructor		  */
/* ********************** */

	ClapTrap::~ClapTrap()
	{
		std::cout << "<" << _name << "> ClatpTrap disintegrated! There's nothing left!" <<std::endl;
	}

/* ********************** */
/*		Operators		  */
/* ********************** */

	ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
	{
		_name = rhs._name;
		_hp = rhs._hp;
		_ep = rhs._ep;
		_attack = rhs._attack;
		return (*this);
	}

/* ********************** */
/*		Accessors		  */
/* ********************** */

	std::string ClapTrap::getName(void)
		{return (this->_name);}
	void ClapTrap::setName(std::string name)
		{this->_name = name;}
	unsigned int ClapTrap::getHitPoints(void)
		{return (this->_hp);}
	unsigned int ClapTrap::getEnergyPoints(void)
		{return (this->_ep);}
	unsigned int ClapTrap::getAttackDamage(void)
		{return (this->_attack);}
		
/* ********************** */
/*		Methods			  */
/* ********************** */

	void ClapTrap::attack(const std::string &target)
	{
		if (! _hp || ! _ep)
		{
			std::cout 
			<< "ClapTrap " << _name << " CAN NOT attack "<< target
			<< ", it has only "<< _hp <<" HP and "<<_ep <<" EP left." << std::endl;
			return ;
		}
		std::cout 
			<< "ClapTrap " << _name << " attacks "<< target
			<<", causing " << _attack << " points of damage!" << std::endl;
		_ep--;
	}

	void ClapTrap::takeDamage(unsigned int amount)
	{
		int damage;

		if (amount > _hp)
			damage = _hp;
		else
			damage = amount;
		_hp -= damage;
		std::cout 
			<< "ClapTrap " << _name << " was attacked for "<< amount
			<<", causing " << damage << " points of damage!";
		if (!_hp)
			std::cout << "It's dead!";
		std::cout << std::endl;
	}

	void ClapTrap::beRepaired(unsigned int amount)
	{
		if (!_hp || !_ep)
		{
			std::cout 
			<< "ClapTrap " << _name << " CAN NOT be repaired for "<< amount<< "HP"
			<< ", it has only "<< _hp <<" HP and "<<_ep <<" EP left." << std::endl;
			return ;
		}
		_hp += amount;
		_ep--;
		std::cout 
			<< "ClapTrap " << _name << " repaired for "<< amount<< " HP." << std::endl;
	}