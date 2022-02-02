/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 08:34:16 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/02 14:47:16 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
	int						index;
	static std::string		headers[5];
	std::string				fields[5];

	enum Field 
	{
		FirstName = 0,
		LastName,
		Nickname,
		PhoneNumber,
		DarkestSecret		
	};
public:
//constructor-destructor
	Contact();
	virtual ~Contact();
	
//actions
	bool	set_fields(int index);
	void	disp_headers(void);
	void	display(void);
};

#endif