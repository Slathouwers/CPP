/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:06:10 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 17:52:00 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

int main(int ac, char const **av)
{
	Karen k;
	if (ac != 2)
		std::cerr << "Error: invalid argument count" << std::endl;
	else
		k.complain(av[1]);
    return (0);
}