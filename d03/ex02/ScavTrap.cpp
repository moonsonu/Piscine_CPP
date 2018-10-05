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

Scavtrap::Scavtrap(std::string str)
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

Scavtrap::~Scavtrap()
{
        std::cout << "Deconstructor called" << std::endl;

        return ;
}


/*void    Scavtrap::takeDamage(unsigned int amount)
{
        int             damage;

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

void    Scavtrap::beRepaired(unsigned int amount)
{
        this->hit += amount;
        this->hit = (this->hit > this->maxHit) ? this->maxHit : this->hit;
        std::cout << this->name << "hp repaired HP : " << this->hit << std::endl;

        return ;
}*/

void    Scavtrap::rangedAttack(std::string const & target)
{
        std::cout << "SC4G-TP " << this->name <<  " attacks " << target << " at range, causing " << this->rangedDamage << " points of damage !" << std::endl;
}

void    Scavtrap::meleeAttack(std::string const & target)
{
        std::cout << "SC4G-TP " << this->name <<  " attacks " << target << " at melee, causing " << this->meleeDamage << " points of damage !" << std::endl;
}

void	Scavtrap::challengeNewcomer(std::string const & target)
{
	void (Scavtrap::*cptr[5])(std::string const & target) = {&Scavtrap::challenge1, &Scavtrap::challenge2, &Scavtrap::challenge3, &Scavtrap::challenge4, &Scavtrap::challenge5};
	int		r;
	r = rand() % 5;
	(this->*cptr[r])(target);
}

void	Scavtrap::challenge1(std::string const & target)
{
	std::cout << "challenge " << target << "to 어쩌고" << std::endl;
}

void	Scavtrap::challenge2(std::string const & target)
{
	std::cout << "challenge " << target << "to 저쩌고" << std::endl;
}

void	Scavtrap::challenge3(std::string const & target)
{
	std::cout << "challenge " << target << "to 블라블라" << std::endl;
}

void	Scavtrap::challenge4(std::string const & target)
{
	std::cout << "challenge " << target << "to 멍멍멍" << std::endl;
}

void	Scavtrap::challenge5(std::string const & target)
{
	std::cout << "challenge " << target << "to 냐옹냐옹" << std::endl;
}
