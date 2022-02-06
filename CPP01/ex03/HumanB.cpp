/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:09:00 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 14:21:35 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp" 

HumanB::HumanB(std::string name)
:_name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {this->_weapon = &weapon;}