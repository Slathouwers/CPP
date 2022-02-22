/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:00:41 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/22 12:08:38 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
	
public:
//constructor
	DiamondTrap(); //default
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &rhs);
//destructor
	~DiamondTrap();
//operators
	DiamondTrap &operator=(DiamondTrap const &rhs);
};

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::~DiamondTrap()
{
}




#endif