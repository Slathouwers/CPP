/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 08:34:16 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/03 09:41:08 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
//attributes
	int							index;
	std::string					firstName;
	std::string					lastName;
	std::string					nickname;
	std::string					phoneNumber;
	std::string					darkestSecret;
	static const std::string	fieldNames[5];

public:
//constructor-destructor
	Contact();
	~Contact();
	
//accessors
	void 			set_firstName(std::string firstName);
	std::string		get_firstName(void);
	
	void 			set_lastName(std::string lastName);
	std::string		get_lastName(void);
	
	void 			set_nickname(std::string nickname);
	std::string		get_nickname(void);
	
	void 			set_phoneNumber(std::string phoneNumber);
	std::string		get_phoneNumber(void);
	
	void 			set_darkestSecret(std::string darkestSecret);
	std::string		get_darkestSecret(void);

	const std::string	*get_fieldNames(void);
	std::string			*get_fieldContents(void);
	
	void	init(int index);
};

#endif