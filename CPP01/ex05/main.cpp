/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:06:10 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/06 17:52:17 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

int main(void)
{
    Karen k;
    k.complain("INFO");
    k.complain("DEBUG");
    k.complain("WARNING");
    k.complain("ERROR");
    return (0);
}