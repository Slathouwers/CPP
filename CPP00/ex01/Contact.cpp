/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:47:59 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/02 14:59:28 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

std::string Contact::headers[5] = 
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->fields[i] = std::string();
}

Contact::~Contact()
{
	
}

bool Contact::set_fields(int index)
{
	this->index = index;
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "# " << Contact::headers[i] << ":\n";
		std::getline
	}
}