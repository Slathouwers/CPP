/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 08:53:52 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/08 11:00:49 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
	BSP could still be optimized:
	- PERFORMANCE-wise by creating a bounding box around the triangle:
		which is basically a rectangle placing min and max restrictions on a 
		point's x,y coords to be eligable to be contained in a triangle
	- ACCURACY-wise by calculating and validating the distance between M and the triangle edges
		to avoid any rounding issues when calculating dotProducts close to the edge 
*/

Fixed	dotProduct(Point const &m, Point const &p1, Point const &p2)
{
	// return (y2 - y1)*(x - x1) + (-x2 + x1)*(y - y1);
	return ((p2.getY() - p1.getY()) * (m.getX() - p1.getX()) 
			+ (p1.getX() - p2.getX()) * (m.getY() - p1.getY()));
}

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &m)
{
	Fixed dot1, dot2, dot3;
	bool front, back, edge;
	
	dot1 = dotProduct(m, a, b);
	dot2 = dotProduct(m, b, c);
	dot3 = dotProduct(m, c, a);

	front = dot1 > 0 || dot2 > 0 || dot3 > 0;
	back = dot1 < 0 || dot2 < 0 || dot3 < 0;
	
	return ((dot1.getRawBits() && dot2.getRawBits() && dot3.getRawBits()) 
				&& !(front && back));
}