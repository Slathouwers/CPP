/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:12:58 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/08 14:38:05 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ********************** */
/*		Constructors	  */
/* ********************** */

	ClapTrap::ClapTrap() //default
	: _name(std::string()), _hp(10), _ep(10), _attack(0)
	{
	}

	ClapTrap::ClapTrap(std::string name)
	: _name(name), _hp(10), _ep(10), _attack(0)
	{	
	}

	ClapTrap::ClapTrap(ClapTrap const &rhs) //copy
	: _name(rhs._name), _hp(rhs._hp), _ep(rhs._ep), _attack(rhs._attack)
	{	
	}

/* ********************** */
/*		Destructor		  */
/* ********************** */

	ClapTrap::~ClapTrap()
	{
	}

/* ********************** */
/*		Operators		  */
/* ********************** */

	

/* ********************** */
/*		Accessors		  */
/* ********************** */

/* ********************** */
/*		Methods		  */
/* ********************** */