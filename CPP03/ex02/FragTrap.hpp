/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:40:42 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/21 11:46:22 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# define FRAG_COLOR "\e[0;32m"
# define FRAG_RESET "\e[0m"

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	
public:
//Constructors
	FragTrap(); //Default
	FragTrap(std::string name);
	FragTrap(FragTrap const &rhs); //Copy
//Dextructors
	~FragTrap();
//operators
	FragTrap &operator=(FragTrap const &rhs);
//methods
	void highFivesGuys(void);
};

#endif