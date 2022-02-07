/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:08:11 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/07 10:44:22 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

// OCCF = Default constructor, 
//			default destructor, 
//			copy constructor
//			and copy assignment operator

class Fixed
{
private:
	int					_rawBits;
	static const int	_fractionalBits;
public:
	Fixed(int rawbits);  //Default constructor
	Fixed(Fixed const &rhs); //copy constructor
	~Fixed();				//Destructor
	Fixed &operator=(Fixed const &rhs); //copy assignment operator

//accessors:
	int		getRawBits(void) const;
	void	setRawBits(int const rawbits);
	
};

#endif