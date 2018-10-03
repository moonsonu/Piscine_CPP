/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:28:07 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:28:09 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	return ;
}

Brain::~Brain()
{
	return ;
}

std::string		Brain::getString()
{
	std::stringstream		p;
	p << this;
	this->str = p.str();
	return (this->str);
}

std::string		Brain::identify()
{
	return (this->getString());
}
