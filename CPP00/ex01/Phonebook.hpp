/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 07:19:42 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/04 11:12:22 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>
# include "Contact.hpp"

class Phonebook
{
//attributes
private:
	Contact		contacts[8];
	int			n_contacts;
	int 		cursor;
public:
//constructor-destructor
	Phonebook();
	~Phonebook();
//actions
	void	addContact(void);
	void	displayContacts(void);
	void	searchContact(void);
	void	selectContact(int index);
	void	open(void);
};

#endif
