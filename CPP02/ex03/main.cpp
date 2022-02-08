/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:40:00 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/08 09:56:21 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

int main( void ) 
{
	Point A(1,1);
	Point B(3,2);
	Point C(2,4);
	
	Point I1(2,2);
	Point I2(2,3);
	Point I3(2.6,2);
	Point I4(2.1,3.5);
	
	Point O1(0,0);
	Point O2(4.5, 8.1);
	
	Point V1(2,4);
	Point V2(1,1);

	std::cout 
		<<"TRIANGLE: A" << A << " B" << B << " C"<< C << "\n"
		<< "IN Point I1 = " << I1 << " is in triangle: "<< bsp(A,B,C,I1) <<"\n"
		<< "IN Point I2 = " << I2 << " is in triangle: "<< bsp(A,B,C,I2) <<"\n"
		<< "IN Point I3 = " << I3 << " is in triangle: "<< bsp(A,B,C,I3) <<"\n"
		<< "IN Point I4 = " << I4 << " is in triangle: "<< bsp(A,B,C,I4) <<"\n"
		<< "OUT Point O1 = " << O1 << " is in triangle: "<< bsp(A,B,C,O1) <<"\n"
		<< "OUT Point O2 = " << O2 << " is in triangle: "<< bsp(A,B,C,O2) <<"\n"
		<< "Vertex Point V1 = " << V1 << " is in triangle: "<< bsp(A,B,C,V1) <<"\n"
		<< "Vertex Point V2 = " << V2 << " is in triangle: "<< bsp(A,B,C,V2)
		<< std::endl;
	
	return 0;
}