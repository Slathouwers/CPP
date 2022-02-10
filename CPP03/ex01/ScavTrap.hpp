/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:36:16 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/10 09:08:18 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
//constructors
	ScavTrap(); //default
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &rhs); //copy
//destructors
	~ScavTrap();
//operators
	ScavTrap &operator=(ScavTrap const &rhs);
//methods
	void attack(const std::string &target);
	void guardGate(void);
};

#endif