/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:08:29 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 14:08:31 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon	&_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void    attack(void);

};

#endif