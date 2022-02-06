/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 09:49:52 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 09:53:23 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(void)
{
	Zombie*	heap = new Zombie("Heap Zombie");
	heap->announce();
	randomChump("Stack Zombie");
	delete heap;
	return (0);
}