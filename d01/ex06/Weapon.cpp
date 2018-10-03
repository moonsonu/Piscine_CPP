/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:29:16 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:29:18 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string t): type(t)
{
	return ;
}
Weapon::Weapon()
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void	Weapon::setType(std::string t)
{
	this->type = t;
}

const std::string		&Weapon::getType()
{
	return (this->type);
}
