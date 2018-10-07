/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:49:42 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:49:43 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim("Peon")
{
	return ;
}

Peon::Peon(std::string const name) : Victim(name)
{
	std::cout << "Zog zog" << std::endl;
	return ;
}

Peon::Peon(Peon const & src) : Victim(src.getName())
{
	*this = src;
	std::cout << "Zog zog" << std::endl;
	return ;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon & Peon::operator=(Peon const & rhs)
{
	this->name = rhs.name;
	return (*this);
}

void	Peon::polymorph() const
{
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}
