/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 07:27:12 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/04 11:19:49 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->n_contacts = 0;
	this->cursor = 0;
}
Phonebook::~Phonebook()
{
}

void	Phonebook::addContact(void)
{
	this->contacts[this->cursor].prompt_contact(this->cursor + 1);
	this->cursor = (this->cursor + 1) % 8;
	this->n_contacts < 8 ? this->n_contacts++ : NULL;
}

void	Phonebook::displayContacts(void)
{
	const std::string *headers = this->contacts[0].get_fieldNames();
	std::string *ccontents;
	
	
	std::cout << "\t" << "|" << std::setw(10) << "INDEX";
	for (int i = 0; i < 4; i++)
		std::cout << "|" << std::setw(10) << headers[i];
	std::cout <<"|" << std::endl;

	for (int i = 0; i < this->n_contacts; i++)
	{
		ccontents = this->contacts[i].get_fieldContents();
		std::cout << "\t"<< "|" << std::setw(10) << i + 1;
		for (int j = 0; j < 4; j++)
		{
			if (ccontents[j].length() > 10)
				std::cout << "|" << ccontents[j].substr(0, 9) << ".";
			else
				std::cout <<"|" << std::setw(10) << ccontents[j];
		}
		delete[] ccontents;
		std::cout <<"|" << std::endl;
	}
}

void	Phonebook::searchContact(void)
{
	int	index;
	
	this->displayContacts();
	if (this->n_contacts == 0)
		std::cout << "# CONTACTS EMPTY: Add some before searching" << std::endl;
	else
	{
		std::cout << "# Select contact by index, select 0 to go back:" << std::endl;
		while(!(std::cin >> index) || index < 0 || index > this->n_contacts)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "# Not a valid index. Try again:"<< std::endl;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			this->selectContact(index - 1);
	}
}

void	Phonebook::selectContact(int index)
{
	const std::string *headers = this->contacts[0].get_fieldNames();
	std::string *ccontents;

	ccontents = this->contacts[index].get_fieldContents();
	std::cout << "# CONTACT NUMEBER " << index + 1 << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "\t" << headers[i] << ": " << ccontents[i] << std::endl;
	delete[] ccontents;
}

void	Phonebook::open(void)
{
	std::string cmd;
	
	std::cout << "# WELCOME TO YOUR PHONEBOOK # \n";
	std::cout << "# Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
	while(1)
	{
		std::cout << "COMMAND > ";
		std::getline(std::cin, cmd);
		if(cmd == "ADD")
			this->addContact();
		else if (cmd == "SEARCH")
			this->searchContact();
		else if (cmd == "EXIT")
		{
			std::cout << "# Closing Phonebook..." << std::endl;
			break ;
		}
		else
			std::cout << "Try again please..." << std::endl;
	}
}