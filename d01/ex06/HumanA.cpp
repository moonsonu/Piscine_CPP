/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:28:47 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:28:48 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string n, Weapon &a): name(n), wa(a)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void		HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->wa.getType() << std::endl;
}
