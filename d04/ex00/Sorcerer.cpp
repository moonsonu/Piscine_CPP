/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:49:09 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:49:11 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	return ;
}

Sorcerer::Sorcerer(std::string n, std:: string t) : name(n), title(t)
{
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
	return ;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title;
	std::cout <<", is dead. Consequenced will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const & s)
{
	o << "I am " << s.name << ", " << s.title << ", and I like ponies !" << std::endl;
	return (o);
}

void			Sorcerer::polymorph(Victim const & victim) const
{
	victim.polymorph();
}
