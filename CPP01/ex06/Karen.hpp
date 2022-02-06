/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:06:13 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 17:38:46 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>



class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	static std::string	_lvl[4];
	static void	(Karen::*level[4])(void);
	
public:
	Karen();
	~Karen();
	void	complain(std::string const &lvl);
};

typedef void (Karen::*level)(void);

#endif