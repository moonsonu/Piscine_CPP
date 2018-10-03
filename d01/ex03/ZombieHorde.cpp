/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:27:13 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:27:15 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
	return ;
}

ZombieHorde::~ZombieHorde()
{
	return ;
}
ZombieHorde::ZombieHorde(int n): number(n)
{
	this->zombie = new Zombie[n];
	for (int i = 0; i < this->number; i++)
	{
		this->zombie[i].setZombieType("mung");
		this->zombie[i].setZombieName(this->randomChump());
	}
	return ;
}

void		ZombieHorde::announce()
{
	for (int i = 0; i < this->number; i++)
		std::cout << this->zombie[i].announce() << std::endl;
	return ;
}
std::string		ZombieHorde::randomChump()
{
        int                             r;
        std::string             randname[7] = {"teddy", "mari", "lime", "moonyoni", "doreMI", "apromae", "cookietho"};

        r = rand() % 4;
        return (randname[r]);
;
}
