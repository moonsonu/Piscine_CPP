/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:04:43 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:04:44 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{   
	_function[0] = &Intern::Presidential;
    _function[1] = &Intern::RobotmyRequest;
    _function[2] = &Intern::ShrubberyCreation;
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

std::string	Intern::_name[3] = {"pres", "robot", "shrub"};

Form * Intern::makeForm(std::string name, std::string target)
{
	try
	{
		return (searchForm(name, target));
	}
	catch (std::exception & e)
	{
		std::cout << name << " -> Form Not Found" << std::endl;
		return (NULL);
	}
}

Form * Intern::searchForm(std::string name, std::string target)
{
	for(int i = 0; i < 3; i++)
	{
		if (name == this->_name[i])
		{
			return ((this->*_function[i])(target));
		}
	}
	std::cout << "Form Not Found" << std::endl;
	return (NULL);
}

Form * Intern::RobotmyRequest(std::string target)
{
	return (new RobotmyRequestForm(target));
}

Form * Intern::Presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form * Intern::ShrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
