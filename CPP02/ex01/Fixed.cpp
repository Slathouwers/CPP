/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:39:29 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/07 11:47:57 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ********************** */
/*		STATIC CONST	  */
/* ********************** */

int	const Fixed::_fractionalBits = 8;

/* ********************** */
/*		constructors	  */
/* ********************** */

	//Default
	Fixed::Fixed()
	{
		std::cout << "Default constructor called" << std::endl;
	}

	// int bits shifted left for number of _fractionalBits = Fixed bit representation
	Fixed::Fixed(int i) :_rawBits(i << _fractionalBits)
	{
		std::cout << "Int constructor called" << std::endl;
	}

	// float multiplied by 2^_fractionalBits and then rounded to nearest int = Fixed bit representation
	Fixed::Fixed(float f) :_rawBits((int) roundf(f * (1 << _fractionalBits)))
	{
		std::cout << "Float constructor called" << std::endl;
	}
	
	//Copy constructor
	Fixed::Fixed(Fixed const &rhs)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = rhs;
	}
	
/* ********************** */
/*		Destructor		  */
/* ********************** */

	Fixed::~Fixed()
	{
		std::cout << "Destructor called" << std::endl;
	}
	
/* ********************** */
/*		operators		  */
/* ********************** */

	Fixed	&Fixed::operator=(Fixed const &rhs)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		if (this != &rhs)
			this->_rawBits = rhs._rawBits;
		return (*this);
	}
	
/* ********************** */
/*		consversions	  */
/* ********************** */

	// rawbit devided by 2^_frationalBits = floating point representation
	float		Fixed::toFloat(void) const
	{
		return ((float) this->_rawBits / (float) (1 << this->_fractionalBits));
	}

	// rawbits shifted right by _fractionalBits = (floor) int representation
	int			Fixed::toInt(void) const
	{
		return (this->_rawBits >> this->_fractionalBits);
	}

/* ********************** */
/*		accessors		  */
/* ********************** */

	void	Fixed::setRawBits(int const rawbits)
	{
		std::cout << "setRawBits member function called" << std::endl;
		this->_rawBits = rawbits;
	}

	int		Fixed::getRawBits(void) const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->_rawBits);
	}

/* ********************** */
/*	Non-meber operators	  */
/* ********************** */

	std::ostream &operator<<(std::ostream &ofs, Fixed const &rhs)
	{
		ofs << rhs.toFloat();
		return ofs;
	}