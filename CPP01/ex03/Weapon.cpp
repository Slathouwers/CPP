/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:45:52 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 13:58:48 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string type)
:_type(type)
{
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType(void) const 
	{return this->_type;}
void	Weapon::setType(std::string type) 
	{this->_type = type;}