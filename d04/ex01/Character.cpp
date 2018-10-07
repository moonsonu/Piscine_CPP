/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:51:55 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:51:56 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	return ;
}

Character::Character(Character const & src)
{
	*this = src;
	return ;
}

Character::Character(std::string const & n): _name(n)
{
	this->_ap = 40;
	this->_w = NULL;
	return ;
}

Character::~Character()
{
	return ;
}

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs.getName();
	this->_ap = rhs.getAP();
	this->_w = rhs.getWeapon();
	return (*this);
}

void		Character::recoverAP()
{
	this->_ap += 10;
	(this->_ap) = (this->_ap > 40 ) ? 40 : this->_ap;
}

void		Character::equip(AWeapon* weapon)
{
	this->_w = weapon;
}

void		Character::attack(Enemy* _e)
{
	if (!_e || !this->_w)
		return ;
	if (this->_ap >= this->_w->getAPCost())
	{
		std::cout << _name << " attacks " << _e->getType() << " with a " << this->_w->getName() << std:: endl;
		this->_ap -= this->_w->getAPCost();
		this->_w->attack();
		_e->takeDamage(this->_w->getDamage());
		if (_e->getHP() <= 0)
			delete _e;
	}
}

std::string	const Character::getName() const
{
	return (this->_name);
}

AWeapon*	Character::getWeapon() const
{
	return this->_w;
}

int			Character::getAP() const
{
	return this->_ap;
}

std::ostream & operator << (std::ostream & o, Character const & c)
{
	if (c.getWeapon() != NULL)
	{
	o << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	}
	else
		std::cout << c.getName() << " has " << c.getAP() << " and is unarmed" << std::endl;
	return (o);
}
