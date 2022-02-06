/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 09:38:34 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 10:25:15 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = std::string();
}

Zombie::Zombie(std::string name)
:_name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "<" << _name << ">" << " has been destroyed" << std::endl;
}

void	Zombie::setName(std::string name) {this->_name = name;};

void Zombie::announce(void)
{
	std::cout << "<" << _name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
