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
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

Form * makeForm(std::string name, std::string target)
{
}

Form * searchForm(std::string name, std::string target)
{
}

Form * Intern::RobotmyRequest(std::string const & target)
{
	return (new RobotmyRequestForm(target));
}

Form * Intern::Presidential(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Form * Intern::ShrubberyCreation(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}
