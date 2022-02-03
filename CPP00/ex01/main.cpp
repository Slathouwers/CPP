/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:13:59 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/03 09:50:53 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


int	main(void)
{
	Contact contacts[2];
	const std::string *fieldNames = contacts[0].get_fieldNames();

	for (int i = 0; i < 2; i++)
		contacts[i].init(i);

	std::cout << "\033[2J";
	for (int i = 0; i < 5; i++)
		std::cout << " | " << fieldNames[i];
	std::cout << "|" << std::endl;
	
	for (int i = 0; i < 2; i++)
	{
		std::string *contents = contacts[i].get_fieldContents();
		for (int i = 0; i < 5; i++)
			std::cout << "|" << contents[i];
		std::cout << "|" << std::endl;
	}
	return (0);
}