/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addcontact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:11:11 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/02 12:04:25 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

Contact		addcontact(void)
{
	Contact	contact;

	std::cout << "first name :";
	getline(std::cin, contact.firstname);
	std::cout << "last name :";
	getline(std::cin, contact.lastname);
	std::cout << "nickname :";
	getline(std::cin, contact.nickname);
	std::cout << "login :";
	getline(std::cin, contact.login);
	std::cout << "postal address :";
	getline(std::cin, contact.postaladdr);
	std::cout << "email :";
	getline(std::cin, contact.birthday);
	std::cout << "phonenumber :";
	getline(std::cin, contact.phonenumber);
	std::cout << "birthday :";
	getline(std::cin, contact.birthday);
	std::cout << "favorite meal :";
	getline(std::cin, contact.favmeal);
	std::cout << "underwear color :";
	getline(std::cin, contact.uwcolor);
	std::cout << "dark secret :";
	getline(std::cin, contact.darksecret);

	std::cout << std::endl << "Successfully added!" << std::endl;
	return (contact);
}
