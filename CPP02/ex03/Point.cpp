/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 07:39:50 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/08 10:20:32 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* ********************** */
/*		Constructors	  */
/* ********************** */

	//Default
	Point::Point(): _x(0), _y(0)
	{
	}

	Point::Point(const float &x, const float &y): _x(x), _y(y)
	{
	}
	//Copy constructor
	Point::Point(Point const &rhs): _x(rhs._x), _y(rhs._y)
	{
	}
	
/* ********************** */
/*		Destructor		  */
/* ********************** */

	Point::~Point()
	{
	}

/* ********************** */
/*		Operators		  */
/* ********************** */

	Point	&Point::operator=(Point const &rhs)
	{
		return (*this);
	}

/* ********************** */
/*		Accessors		  */
/* ********************** */

	Fixed Point::getX(void) const
	{
		return (this->_x);
	}

	Fixed Point::getY(void) const
	{
		return (this->_y);
	}

/* ********************** */
/*	Non-meber operators	  */
/* ********************** */

	std::ostream &operator<<(std::ostream &ofs, Point const &rhs)
	{
		ofs << "(x:" << rhs.getX().toFloat() << ", y:"<< rhs.getY().toFloat() <<")";
		return ofs;
	}