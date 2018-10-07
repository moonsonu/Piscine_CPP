/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:50:50 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:50:51 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{
	return ;
}

PowerFist::PowerFist(PowerFist const & src)
{
	*this = src;
}

PowerFist::~PowerFist()
{
	return ;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	this->setName(rhs.getName());
	this->setDamage(rhs.getDamage());
	this->setAPCost(rhs.getAPCost());
	return (*this);
}

void		PowerFist::attack() const
{
	std::cout << "* Pschhh... SBAM! *" << std::endl;
	return ;
}
