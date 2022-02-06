/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:02:27 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 14:17:59 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon	*_weapon;
public:
	HumanB(std::string name);
	~HumanB();

	void    attack(void);
	void	setWeapon(Weapon &weapon);
};

#endif