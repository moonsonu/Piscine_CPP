/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:27:54 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:27:56 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*p = &str;
	std::string		&r = str;

	std::cout << "string : " << str << std::endl;
	std::cout << "pointer : " << p << std::endl;
	std::cout << "reference : " << r << std::endl;
	return (0);
}
