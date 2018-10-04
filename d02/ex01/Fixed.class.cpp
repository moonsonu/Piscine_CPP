/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:44:36 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 15:44:38 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed()
{
	this->fp = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int v)
{
	this->fp = v << this->fbits;
	std::cout << "Int constructor called" <<std::endl;
}

Fixed::Fixed(const float v)
{
	this->fp = roundf(v * (1 << this->fbits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
	*this = f;
	std::cout << "Copy contructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & res)
{
	this->fp = res.getRawBits();
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member fuction called" << std::endl;
	return (this->fp);
}

void	Fixed::setRawBits(int const raw)
{
	this->fp= raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->fp) / (1 << this->fbits));
}

int		Fixed::toInt(void) const
{
	return ((int)(this->fp >> this->fbits));
}

std::ostream	&operator<<(std::ostream &o, Fixed const & v)
{
	o << v.toFloat();
	return (o);
}
