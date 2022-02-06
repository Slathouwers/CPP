/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:30:04 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 17:00:40 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sed.hpp"
//# include <assert.h>

int main(int ac, char const **av)
{
	if (ac != 4)
	{
		std::cerr << "Invalid arguments: Usage './sed <Filename> <search> <replace>'" << std::endl;
		return (1);
	}
	try {
		Sed::sed(av[1], av[2], av[3]);
	}
	catch (char const *e) {
		std::cerr << "Sed: Error: " << e << std::endl;
	}
	return (0);
}