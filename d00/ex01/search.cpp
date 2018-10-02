/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 12:04:41 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/02 12:04:43 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

void	print(std::string str)
{
	std::cout.width(11);
	std::cout << str << "|";
}

std::string		truncate(std::string str)
{
	std::string	newstr;

	if (str.length() > 10)
		newstr = str.substr(0, 9) + ".";
	else
		newstr = str;
	return (newstr);
}

void		printcontact(Contact *contact, int idx)
{
	print("index");
	print("1st name");
	print("2nd name");
	print("nickname");
	std::cout << std::endl;
	for (int i = 1; i < idx; i++)
	{
		std::cout.width(11);
		std::cout << i << "|";
		print(truncate(contact[i].firstname));
		print(truncate(contact[i].lastname));
		print(truncate(contact[i].nickname));
		std::cout << std::endl;
	}
}

void		searchcontact(Contact *contact, int idx)
{
	std::string		i;
	int			sidx;
	if (idx == 1)
		std::cout << "NOTHING" << std::endl;
	else
	{
		printcontact(contact, idx);
		std::cout << "Enter the index you want to search :";
		std::getline(std::cin, i, '\n');
		if (i[0] > 48 && i[0] < 57)
		{
			sidx = i[0] - 48;
			std::cout << "first name : " << contact[sidx].firstname << std::endl;
			std::cout << "last name : " << contact[sidx].lastname << std::endl;
			std::cout << "nickname : " << contact[sidx].nickname << std::endl;
			std::cout << "login: " << contact[sidx].login << std::endl;
			std::cout << "postal address : " << contact[sidx].postaladdr << std::endl;
			std::cout << "email : " << contact[sidx].email << std::endl;
			std::cout << "phone number : " << contact[sidx].phonenumber << std::endl;
			std::cout << "birthday : " << contact[sidx].birthday << std::endl;
			std::cout << "favorite meal : " << contact[sidx].favmeal << std::endl;
			std::cout << "underwear color : " << contact[sidx].uwcolor << std::endl;
			std::cout << "dark secret : " << contact[sidx].darksecret << std::endl;
		}
		else
			std::cout << "invalid index" << std::endl;
	}
}
