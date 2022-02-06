/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:59:03 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 14:21:28 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp" 

HumanA::HumanA(std::string name, Weapon &weapon)
:_name(name), _weapon(weapon)
{
}
HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}