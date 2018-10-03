/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:25:19 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:25:22 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string n, std::string t): name(n), type(t)
{
	return ;
}

Zombie::~Zombie()
{
	return ;
}
void		Zombie::announce()
{
	std::cout << "<" << this->name << "(" << this->type << ")> Braiiiiiiinnnsss..." << std::endl;
}
