/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:35:09 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 17:00:59 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed()
{
	
}

Sed::~Sed()
{
}

bool	Sed::validateInput(std::string const &filename, std::string const &search, std::string const &replace)
{
	if (!filename.length())
		throw "Filename not provided.";
	else if (!search.length())
		throw "Search string not provided";
	else if (!replace.length())
	{
		char c;
		std::cout << "Replace string is empty, want to delete all search occurences?(Y/N)" << std::flush;
		std::cin.get(c);
		if (c == 'N' || c == 'n')
			throw "Sed cancelled...";
	}
	return (1);
}

std::string Sed::strReplace(std::string const &line, std::string const &search, std::string const &replace)
{
	std::stringstream s;
	size_t	cursor = 0;
	const size_t slenght = search.length();
	size_t found = line.find(search);

	while (found!=std::string::npos)
	{
		s << line.substr(cursor, found - cursor);
		s << replace;
		cursor = search.length() + found;
		found = line.find(search, found + 1);
	}
	if (cursor < line.length() - 1)
		s << line.substr(cursor, line.length() - cursor);
	return (s.str());
}

void	Sed::sed(std::string const &filename, std::string const &search, std::string const &replace)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string	line;
	
	try {Sed::validateInput(filename, search, replace);}
	catch (char const *e) {
		throw e;
	}
	infile.open(filename);
	if(!infile.is_open())
		throw "Could not open input file.";
	outfile.open(filename + ".replace", std::ios::trunc);
	if (!outfile.is_open())
		throw "Could not open output file";
	while (std::getline(infile, line))
	{
		outfile << Sed::strReplace(line, search, replace);
		if (!infile.eof())
			outfile << "\n";
	}
	infile.close();
	outfile.close();
}