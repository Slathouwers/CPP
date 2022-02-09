/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:12:56 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/09 09:03:23 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hp;
	unsigned int _ep;
	unsigned int _attack;
public:
//constructors
	ClapTrap(); //default
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &rhs); //copy
//destructors
	~ClapTrap();
//operators
	ClapTrap &operator=(ClapTrap const &rhs);
//accessors
	std::string getName(void);
	void setName(std::string name);
	unsigned int getHitPoints(void);
	unsigned int getEnergyPoints(void);
	unsigned int getAttackDamage(void);
//methods
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif