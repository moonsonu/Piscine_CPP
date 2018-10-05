/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:33:20 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:33:22 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap()
{
	return ;
}

Claptrap::Claptrap(std::string str)
{
	this->name = str;
	this->hit = 100;
	this->maxHit = 100;
	this->energy = 100;
	this->maxEnergy = 100;
	this->level = 1;
	this->meleeDamage = 30;
	this->rangedDamage = 20;
	this->armor = 5;

	std::cout << "ClapTrap default constructor called" << std::endl;

	return ;
}

Claptrap::~Claptrap()
{
	std::cout << "ClapTrap deconstructor called" << std::endl;
	return ;
}

void		Claptrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4G-TP " << this->name <<  " attacks " << target << " at range, causing " << this->rangedDamage << " points of damage !" << std::endl;
}

void		Claptrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4G-TP " << this->name <<  " attacks " << target << " at melee, causing " << this->meleeDamage << " points of damage !" << std::endl;
}

void		Claptrap::takeDamage(unsigned int amount)
{
	unsigned int             damage;

	damage = amount - this->armor;
	if (damage > this->hit)
		std::cout << this->name << "DEAD" << std::endl;
	else
	{
		this->hit -= damage;
		std::cout << this->name << "CLAP 사롸있네 사롸잇어HP : " << this->hit << std::endl;
	}
	return ;
}

void		Claptrap::beRepaired(unsigned int amount)
{
	this->hit += amount;
	this->hit = (this->hit > this->maxHit) ? this->maxHit : this->hit;
	std::cout << this->name << "CLAP hp repaired HP : " << this->hit << std::endl;

	return ;
}

std::string		Claptrap::getName(void)
{
    return (this->name);
}

unsigned int	Claptrap::getMeleeDamage(void)
{
    return (this->meleeDamage);
}

unsigned int	Claptrap::getRangedDamage(void)
{
    return (this->rangedDamage);
}

void			Claptrap::getHp()
{
	std::cout << "claptrap : " << this->hit << std::endl;
}
