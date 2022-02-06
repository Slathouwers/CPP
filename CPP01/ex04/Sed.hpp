/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:32:40 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 16:45:48 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>

class Sed
{
private:
	static	bool	validateInput(std::string const &filename, std::string const &search, std::string const &replace);
	static	std::string strReplace(std::string const &line, std::string const &search, std::string const &replace);
public:
	Sed();
	~Sed();

	static void	sed(std::string const &filenamem, std::string const &search, std::string const &replace);
};

#endif