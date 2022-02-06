/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:44:35 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 10:51:58 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR = &str;

	std::cout << "string address = " << &str << "\n"
		<< "string address by REF = " << &stringREF << "\n"
		<< "string address by PTR = " << stringPTR << "\n"
		<< "string value by REF = \"" << stringREF << "\"\n"
		<< "string value by PTR = \"" << *stringPTR << "\"" << std::endl;
}