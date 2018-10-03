/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:25:44 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:26:17 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
        return ;
}

ZombieEvent::~ZombieEvent()
{
        return ;
}

std::string		ZombieEvent::setZombieType(std::string str)
{
	this->type = str;
	return (this->type);
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, type));
}

Zombie			*ZombieEvent::randomChump()
{
	Zombie			*z;
	int				r;
	std::string		Name[7] = {"teddy", "mari", "lime", "moonyoni", "doreMI", "apromae", "cookietho"};

	if (this->type == "")
		this->setZombieType("type");
	r = rand() % 4;
	z = this->newZombie(Name[r]);

	return (z);
}
