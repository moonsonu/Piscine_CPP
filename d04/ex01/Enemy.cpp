/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:51:13 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:51:14 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	return ;
}

Enemy::Enemy(int hp, std::string const & type)
{
	this->_type = type;
	this->_hp = hp;
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
	return ;
}

Enemy::~Enemy()
{
	return ;
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return (*this);
}

void			Enemy::takeDamage(int dam)
{
	if (dam > 0)
	{
		this->_hp -= dam;
	}
	else
		this->_hp = 0;
}

std::string	const Enemy::getType() const
{
	return (this->_type);
}

int				Enemy::getHP() const
{
	return (this->_hp);
}

void			Enemy::setType(std::string type)
{
	this->_type = type;
}

void			Enemy::setHP(int hp)
{
	this->_hp = hp;
}
