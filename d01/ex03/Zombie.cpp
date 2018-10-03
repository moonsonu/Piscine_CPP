/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:26:48 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:26:50 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string n, std::string t): name(n), type(t)
{
	return ;
}

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	return ;
}

void		Zombie::setZombieType(std::string str)
{
	this->type = str;
	return ;
}

void		Zombie::setZombieName(std::string str)
{
	this->name = str;
	return ;
}
std::string		Zombie::announce()
{

    std::string format;
    std::string message;

    format = "<" + this->name + " (" + this->type + ")> ";
    message = "Braiiiiiiinnnssss...";
    return (format + message);
}
