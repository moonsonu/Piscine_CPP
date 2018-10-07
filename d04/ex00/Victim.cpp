/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:49:25 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:49:26 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	return ;
}

Victim::Victim(std::string n) : name(n)
{
	std::cout << "Some random victim called " << this->name << " just popped !" << std::endl;
	return ;
}

Victim::Victim(Victim const &src)
{
	*this = src;
	std::cout << "Some random victim called " << this->name << " just popped !" << std::endl;
	
	return ;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
	return ;
}

Victim & Victim::operator=(Victim const & rhs)
{
	this->name = rhs.name;
	return (*this);
}

std::ostream & operator << (std::ostream & o, Victim const & v)
{
	o << "I'm " << v.name << " and I like otters !" << std::endl;
	return (o);
}

void	Victim::polymorph() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
	return ;
}

std::string		Victim::getName() const
{
	return (this->name);
}
