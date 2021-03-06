/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:47:59 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/04 11:15:25 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

const std::string	Contact::fieldNames[5] =
{
	"FIRST NAME",
	"LAST NAME",
	"NICKNAME",
	"PHONE NBR",
	"DARKEST SECRET"
};


Contact::Contact()
{
}

Contact::~Contact()
{
}

void 			Contact::set_firstName(std::string firstName) 	{this->firstName = firstName;}
std::string		Contact::get_firstName(void) 					{return (this->firstName);}
	
void 			Contact::set_lastName(std::string lastName)		{this->lastName = lastName;}
std::string		Contact::get_lastName(void)						{return (this->lastName);}
	
void 			Contact::set_nickname(std::string nickname)		{this->nickname = nickname;}
std::string		Contact::get_nickname(void)						{return (this->nickname);}

void 			Contact::set_phoneNumber(std::string phoneNumber)	{this->phoneNumber = phoneNumber;}
std::string		Contact::get_phoneNumber(void)						{return (this->phoneNumber);}

void 			Contact::set_darkestSecret(std::string darkestSecret)	{this->darkestSecret = darkestSecret;}
std::string		Contact::get_darkestSecret(void)						{return (this->darkestSecret);}

const std::string	*Contact::get_fieldNames(void)						{return (this->fieldNames);}

std::string		*Contact::get_fieldContents(void)
{
	std::string	*contents = new std::string[5];
	contents[0] = this->firstName;
	contents[1] = this->lastName;
	contents[2] = this->nickname;
	contents[3] = this->phoneNumber;
	contents[4] = this->darkestSecret;
	return (contents);
}

void	Contact::prompt_contact(int index)
{
	this->index = index;
	std::cout << "Fill in the following :" << std::endl;
	std::cout << "\t" << "FIRST NAME : >";
	std::getline(std::cin, this->firstName);
	std::cout << "\t" << "LAST NAME : >";
	std::getline(std::cin, this->lastName);
	std::cout << "\t" << "NICKNAME : >";
	std::getline(std::cin, this->nickname);
	std::cout << "\t" << "PHONE NUMBER : >";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "\t" << "DARKEST SECRET : >";
	std::getline(std::cin, this->darkestSecret);
}