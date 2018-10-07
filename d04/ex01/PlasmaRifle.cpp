/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:50:39 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:50:41 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
	*this = src;
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	this->setName(rhs.getName());
	this->setDamage(rhs.getDamage());
	this->setAPCost(rhs.getAPCost());
	return (*this);
}

void		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
