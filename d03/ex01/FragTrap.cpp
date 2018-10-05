/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:32:18 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:32:21 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

Fragtrap::Fragtrap(std::string str)
{
	this->name = str;
	this->hit = 100;
	this->maxHit = 100;
	this->energy = 100;
	this->maxEnergy = 100;
	this->level = 1;
	this->meleeDamage = 30;
	this->rangedDamage = 20;
	this->shoutDamage = 20;
	this->mungDamage = 20;
	this->meowDamage = 20;
	this->bangDamage = 20;
	this->ddongDamage = 20;
	this->armor = 5;
	
	std::cout << "Fragtrap Default constructor called" << std::endl;
	
	return ;
}

Fragtrap::Fragtrap()
{
	return ;
}

Fragtrap::~Fragtrap()
{
	std::cout << "Fragtrap Deconstructor called" << std::endl;

	return ;
}

/*Fragtrap & Fragtrap::operator=(Fragtrap const & rhs)
{
	this->name = rhs.name;
	this->hit = rhs.hit;
	this->maxHit = rhs.maxHit;
	this->energy = rhs.energy;
	this->maxEnergy = rhs.maxEnergy;
	this->level = rhs.level;
	this->meleeDamage = rhs.meleeDamage;
	this->rangedDamage = rhs.rangedDamage;
	this->armor = rhs.armor;
	
	return (*this);
}*/

void	Fragtrap::takeDamage(unsigned int amount)
{
	int		damage;

	damage = amount - this->armor;
	if (damage > this->hit)
		std::cout << this->name << "DEAD" << std::endl;
	else
	{
		this->hit -= damage;
		std::cout << this->name << "사롸있네 사롸잇어HP : " << this->hit << std::endl;
	}
	return ;
}

void	Fragtrap::beRepaired(unsigned int amount)
{
	this->hit += amount;
	this->hit = (this->hit > this->maxHit) ? this->maxHit : this->hit;
	std::cout << this->name << "hp repaired HP : " << this->hit << std::endl;

	return ;
}

void	Fragtrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at range, causing " << this->rangedDamage << " points of damage !" << std::endl;
}

void	Fragtrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at melee, causing " << this->meleeDamage << " points of damage !" << std::endl;
}

void	Fragtrap::intimidatingShout(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at intimidating shout, causing " << this->shoutDamage << " points of damage !" << std::endl;
}

void	Fragtrap::mungAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at mung, causing " << this->mungDamage << " points of damage !" << std::endl;
}

void	Fragtrap::meowAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at meow, causing " << this->meowDamage << " points of damage !" << std::endl;
}

void	Fragtrap::bangAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at bang, causing " << this->bangDamage << " points of damage !" << std::endl;
}

void	Fragtrap::ddongAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at ddong, causing " << this->ddongDamage << " points of damage !" << std::endl;
}

void	Fragtrap::vaulthunter_doc_exe(std::string const & target)
{
	void	(Fragtrap::*fptr[5])(std::string const & target) = {&Fragtrap::bangAttack, &Fragtrap::ddongAttack, &Fragtrap::intimidatingShout, &Fragtrap::mungAttack, &Fragtrap::meowAttack};
	//std::string attacks[5] = {"bang", "ddong", "shout", "mung", "meow"};
	if (this->energy >= 25)
	{
		int		r;
		r = rand() % 5;
		this->energy -= 25;
		(this->*fptr[r])(target);
		std::cout << this->name << "energy remained : " << this->energy << std::endl;
	}
	else
		std::cout << this->name << "not enough energy!" << std::endl;
}

void	Fragtrap::getHp()
{
	std::cout << this->name << " HP remained : "<< this->hit << std::endl;
}
