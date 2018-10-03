/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:28:20 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:28:21 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

Human::Human()
{
	return ;
}

Human::~Human()
{
	return ;
}

Brain	Human::getBrain()
{
	return (this->b);
}

std::string	Human::identify()
{
	return (this->b.identify());
}
