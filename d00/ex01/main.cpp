/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 19:09:36 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/02 12:04:36 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "contact.class.hpp"

void	instruction()
{
	std::cout << "┊ ┊ ┊ ┊ ┊ ┊ ┊ ┊ ┊ ┊ ┊┊"<< std::endl;
	std::cout << "┊ ┊ ✫ ˚♡ ⋆｡ ❀ ˚⋆｡✫ ┊ ┊" << std::endl;
	std::cout << "┊ ☪︎⋆   PHONE BOOK  ☪︎⋆┊" << std::endl;
	std::cout << "⊹ USAGE : ADD        ⊹"  << std::endl;
	std::cout << "┊ . ˚     SEARCH  ˚ .┊"<< std::endl;
	std::cout << "✧         EXIT       ✧" << std::endl;
}
int		main(int ac, char **av)
{
	int		idx = 1;
	std::string	command;
	Contact	contact[9];

	instruction();
	while (1)
	{
	getline(std::cin, command, '\n');

	if (command == "ADD" || command == "add")
	{
		if (idx == 9)
			std::cout << "FULL" << std::endl;
		else
			contact[idx++] = addcontact();
	}
	else if (command == "SEARCH" || command == "search")
		searchcontact(contact, idx);
	else if (command == "EXIT" || command == "exit")
		return (0);
	else
	{
		std::cout << "usage : ADD - to add contact" << std::endl;
		std::cout << "        SEARCH - to search contact" << std::endl;
		std::cout << "        EXIT - to close phonebook" << std::endl;
	}
	}
	return (0);
}
