/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:24:17 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:24:24 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony()
{
	return ;
}

Pony::~Pony()
{
	return ;
}

void	Pony::setNum(int num)
{
	this->n = num;
	return ;
}

int		Pony::getNum()
{
	return (this->n);
}
