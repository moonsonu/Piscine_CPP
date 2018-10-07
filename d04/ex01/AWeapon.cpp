/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:50:14 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:50:15 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
	this->_name = rhs._name;
	this->_damage = rhs._damage;
	this->_apcost = rhs._apcost;
	return (*this);
}

std::string const	AWeapon::getName() const
{
	return (this->_name);
}

int				AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int				AWeapon::getDamage() const
{
	return (this->_damage);
}

void			AWeapon::setName(std::string name)
{
	this->_name = name;
}

void			AWeapon::setDamage(int damage)
{
	this->_damage = damage;
}

void			AWeapon::setAPCost(int apcost)
{
	this->_apcost = apcost;
}
