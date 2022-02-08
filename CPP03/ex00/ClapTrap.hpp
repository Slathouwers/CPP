/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:12:56 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/08 14:51:20 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	const std::string type;
	const int maxHP;
	const int maxEP;
	const int maxAT;
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
//methods
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif