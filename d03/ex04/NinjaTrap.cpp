/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:33:45 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:33:46 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap()
{
	return ;
}

NinjaTrap::NinjaTrap(std::string str)
{
	this->name = str;
	this->hit = 60;
	this->maxHit = 60;
	this->energy = 120;
	this->maxEnergy = 120;
	this->level = 1;
	this->meleeDamage = 60;
	this->rangedDamage = 5;
	this->armor = 0;
}

NinjaTrap::~NinjaTrap()
{
	return ;
}

void            NinjaTrap::rangedAttack(std::string const & target)
{
        std::cout << "NJ4G-TP " << this->name <<  " attacks " << target << " at range, causing " << this->rangedDamage << " points of damage !" << std::endl;
}

void            NinjaTrap::meleeAttack(std::string const & target)
{
        std::cout << "NJ4G-TP " << this->name <<  " attacks " << target << " at melee, causing " << this->meleeDamage << " points of damage !" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &attack)
{
	std::cout << this->name << " ninja " << attack.getName() << " hehe " << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &attack)
{
	std::cout << this->name << " claptrap " << attack.getName() << " hoho " << std::endl;
}
void	NinjaTrap::ninjaShoebox(FragTrap &attack)
{
	std::cout << this->name << " fragtrap " << attack.getName() << " haha " << std::endl;
}
void	NinjaTrap::ninjaShoebox(ScavTrap &attack)
{
	std::cout << this->name << " scavtrap " << attack.getName() << " huhu " << std::endl;
}
