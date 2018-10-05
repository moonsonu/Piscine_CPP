/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:32:59 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:33:01 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string str)
{
        this->name = str;
        this->hit = 100;
        this->maxHit = 100;
        this->energy = 50;
        this->maxEnergy = 50;
        this->level = 1;
        this->meleeDamage = 20;
        this->rangedDamage = 15;
        this->armor = 3;

        std::cout << "Default constructor called" << std::endl;

        return ;
}

ScavTrap::~ScavTrap()
{
        std::cout << "Deconstructor called" << std::endl;

        return ;
}

void    ScavTrap::rangedAttack(std::string const & target)
{
        std::cout << "SC4G-TP " << this->name <<  " attacks " << target << " at range, causing " << this->rangedDamage << " points of damage !" << std::endl;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
        std::cout << "SC4G-TP " << this->name <<  " attacks " << target << " at melee, causing " << this->meleeDamage << " points of damage !" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	void (ScavTrap::*cptr[5])(std::string const & target) = {&ScavTrap::challenge1, &ScavTrap::challenge2, &ScavTrap::challenge3, &ScavTrap::challenge4, &ScavTrap::challenge5};
	int		r;
	r = rand() % 5;
	(this->*cptr[r])(target);
}

void	ScavTrap::challenge1(std::string const & target)
{
	std::cout << "challenge " << target << "to 어쩌고" << std::endl;
}

void	ScavTrap::challenge2(std::string const & target)
{
	std::cout << "challenge " << target << "to 저쩌고" << std::endl;
}

void	ScavTrap::challenge3(std::string const & target)
{
	std::cout << "challenge " << target << "to 블라블라" << std::endl;
}

void	ScavTrap::challenge4(std::string const & target)
{
	std::cout << "challenge " << target << "to 멍멍멍" << std::endl;
}

void	ScavTrap::challenge5(std::string const & target)
{
	std::cout << "challenge " << target << "to 냐옹냐옹" << std::endl;
}
