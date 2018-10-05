/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:34:08 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:34:10 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	return ;
}

SuperTrap::~SuperTrap()
{
	return ;
}

SuperTrap::SuperTrap(std::string str)
{
	this->name = str;
	this->hit = 100;
	this->maxHit = 100;
	this->energy = 120;
	this->maxEnergy = 120;
	this->level = 1;
	this->meleeDamage = 60;
	this->rangedDamage = 20;
	this->armor = 5;
	return ;
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	return (FragTrap::rangedAttack(target));
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	return (NinjaTrap::meleeAttack(target));
}
