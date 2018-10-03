/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:29:02 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:29:03 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>

HumanB::HumanB(std::string n): name(n)
{
	return ;
}

HumanB::HumanB()
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void		HumanB::setWeapon(Weapon &w)
{
	this->wb = &w;
	return ;
}

void		HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->wb->getType() << std::endl;
}
