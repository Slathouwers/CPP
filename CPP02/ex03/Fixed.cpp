/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:39:29 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/08 07:28:41 by slathouw         ###   ########.fr       */
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
		_rawBits = 0;
	}

	// int bits shifted left for number of _fractionalBits = Fixed bit representation
	Fixed::Fixed(int i) :_rawBits(i << _fractionalBits)
	{
	}

	// float multiplied by 2^_fractionalBits and then rounded to nearest int = Fixed bit representation
	Fixed::Fixed(float f) :_rawBits((int) roundf(f * (1 << _fractionalBits)))
	{
	}
	
	//Copy constructor
	Fixed::Fixed(Fixed const &rhs)
	{
		*this = rhs;
	}
	
/* ********************** */
/*		Destructor		  */
/* ********************** */

	Fixed::~Fixed()
	{
	}
	
/* ********************** */
/*		operators		  */
/* ********************** */

	Fixed	&Fixed::operator=(Fixed const &rhs)
	{
		if (this != &rhs)
			this->_rawBits = rhs._rawBits;
		return (*this);
	}

	Fixed Fixed::operator+(Fixed const &rhs)
	{
		_rawBits += rhs._rawBits;
		return (*this);
	}
	
	Fixed Fixed::operator-(Fixed const &rhs)
	{
		_rawBits -= rhs._rawBits;
		return (*this);
}
	
	Fixed Fixed::operator*(Fixed const &rhs)
	{
		_rawBits *= rhs._rawBits >> _fractionalBits;
		return (*this); 
	}
	
	Fixed Fixed::operator/(Fixed const &rhs)
	{
		_rawBits *= rhs._rawBits >> _fractionalBits;
		return (*this); 
	}

	Fixed &Fixed::operator++() //prefix ++
	{
		_rawBits++;
		return (*this);
	}
	
	Fixed &Fixed::operator--() //prefix --
	{
		_rawBits--;
		return (*this); 
	}
	
	Fixed Fixed::operator++(int)
	{
		Fixed tmp(*this);
		_rawBits++;
		return (tmp);
	}
	
	Fixed Fixed::operator--(int)
	{
		Fixed tmp(*this);
		_rawBits--;
		return (tmp);
	}

	bool Fixed::operator<(Fixed const &rhs)
	{
		return (this->_rawBits < rhs._rawBits);
	}
	
	bool Fixed::operator>(Fixed const &rhs)
	{
		return (this->_rawBits > rhs._rawBits);
	}
	
	bool Fixed::operator<=(Fixed const &rhs)
	{
		return (this->_rawBits <= rhs._rawBits);
	}
	
	bool Fixed::operator>=(Fixed const &rhs)
	{
		return (this->_rawBits >= rhs._rawBits);
	}
	
	bool Fixed::operator==(Fixed const &rhs)
	{
		return (this->_rawBits == rhs._rawBits);
	}
	
	bool Fixed::operator!=(Fixed const &rhs)
	{
		return (this->_rawBits != rhs._rawBits);
	}
	

/* ********************** */
/*	Static comparison	  */
/* ********************** */
	Fixed &Fixed::min(Fixed & a, Fixed & b)
	{
		if (a < b)
			return a;
		return b;
	}
	
	Fixed &Fixed::max(Fixed & a, Fixed & b)
	{
		if (a > b)
			return a;
		return b;
	}

	Fixed const &Fixed::min(const Fixed &a, Fixed const &b)
	{
		if (a._rawBits < b._rawBits)
			return a;
		return b;
	}

	Fixed const &Fixed::max(Fixed const & a, Fixed const & b)
	{
		if (a._rawBits > b._rawBits)
			return a;
		return b;
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
		this->_rawBits = rawbits;
	}

	int		Fixed::getRawBits(void) const
	{
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