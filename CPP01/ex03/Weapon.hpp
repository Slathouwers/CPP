/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:44:24 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 13:58:37 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>


class Weapon
{
private:
	std::string	_type;
	
public:
	Weapon(std::string type);
	~Weapon();
// accessors
	const std::string &getType(void) const;
	void		setType(std::string);
};

#endif