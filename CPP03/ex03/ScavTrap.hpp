/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 07:36:16 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/17 11:53:38 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# define SCAV_COLOR "\e[0;33m"
# define SCAV_RESET "\e[0m"

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