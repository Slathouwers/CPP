/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:08:11 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/07 11:22:12 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_rawBits;
	static const int	_fractionalBits;
public:
//constructors
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const &rhs); //copy
//destructors
	~Fixed();
//operators
	Fixed &operator=(Fixed const &rhs);
//conversions
	float	toFloat(void) const;
	int		toInt(void) const;
//accessors
	int		getRawBits(void) const;
	void	setRawBits(int const rawbits);
};

//non-member operators
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif