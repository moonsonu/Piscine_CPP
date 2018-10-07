/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:51:23 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:51:25 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
	*this = src;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
	this->setHP(rhs.getHP()); 
	this->setType(rhs.getType());
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

void		SuperMutant::takeDamage(int dam)
{
	dam -= 3;
	if ((this->getHP() - dam) <= 0)
		this->setHP(0);
	else
		this->setHP(this->getHP() - dam);
}
