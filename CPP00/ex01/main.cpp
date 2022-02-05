/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 09:13:59 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/04 11:32:57 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"


int	main(void)
{
	Phonebook phonebook;
	
	phonebook = Phonebook();
	phonebook.open();
	return (0);
}