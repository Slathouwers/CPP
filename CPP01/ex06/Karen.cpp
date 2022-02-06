/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:06:06 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 17:55:33 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

std::string	Karen::_lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

level	Karen::level[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void Karen::info( void )
{
    std::cout <<"[ INFO ]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void	Karen::complain(std::string const &lvl)
{
	int i = 0;
	while (i < 4)
	{
		if (lvl == this->_lvl[i])
			break ;
		i++;
	}

	switch (i)
	{
	case 3:
		((*this).*level[3])();
	case 2:
		((*this).*level[2])();
	case 1:
		((*this).*level[1])();
	case 0:
		((*this).*level[0])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}