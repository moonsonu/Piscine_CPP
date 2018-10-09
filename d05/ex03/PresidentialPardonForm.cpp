/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:04:16 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:04:17 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exec = 5;

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("Anonymous", "Presidential", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form(target, "Presidential", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
	Form("Anonymous", "Presidential", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void)rhs;
	return *this;
}



void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::cout << "<" << this->getTarget() << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}
