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
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
	return ;
}

FragTrap::FragTrap(std::string str)
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
	
	std::cout << "Default constructor called" << std::endl;
	
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor called" << std::endl;

	return ;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at range, causing " << this->rangedDamage << " points of damage !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at melee, causing " << this->meleeDamage << " points of damage !" << std::endl;
}

void	FragTrap::intimidatingShout(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at intimidating shout, causing " << this->shoutDamage << " points of damage !" << std::endl;
}

void	FragTrap::mungAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at mung, causing " << this->mungDamage << " points of damage !" << std::endl;
}

void	FragTrap::meowAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at meow, causing " << this->meowDamage << " points of damage !" << std::endl;
}

void	FragTrap::bangAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at bang, causing " << this->bangDamage << " points of damage !" << std::endl;
}

void	FragTrap::ddongAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name <<  " attacks " << target << " at ddong, causing " << this->ddongDamage << " points of damage !" << std::endl;
}

void	FragTrap::vaulthunter_doc_exe(std::string const & target)
{
	void	(FragTrap::*fptr[5])(std::string const & target) = {&FragTrap::bangAttack, &FragTrap::ddongAttack, &FragTrap::intimidatingShout, &FragTrap::mungAttack, &FragTrap::meowAttack};
	if (this->energy >= 25)
	{
		int		r;
		r = rand() % 2;
		this->energy -= 25;
		(this->*fptr[r])(target);
		std::cout << this->name << " energy remained : " << this->energy << std::endl;
	}
	else
		std::cout << this->name << "not enough energy!" << std::endl;
}
