/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 07:34:31 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/08 10:18:11 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
//constructors
	Point();
	Point(float const &x, float const &y);
	Point(Point const &p);
//destructors
	~Point();
//operators
	Point &operator=(Point const &rhs);

//accessors
	Fixed getX(void) const;
	Fixed getY(void) const;	
};

//Non-meber operators
std::ostream &operator<<(std::ostream &ofs, Point const &rhs);

// BSP functions:

// Dot product between vectors <P1,P2> and <P1,M>
Fixed	dotProduct(Point const &m, Point const &p1, Point const &p2);
// Triangle abc constains m
bool	bsp(Point const &a, Point const &b, Point const &c, Point const &m);

