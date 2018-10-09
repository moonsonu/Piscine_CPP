/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:03:53 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:03:55 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotmyRequestForm.hpp"

const int RobotmyRequestForm::_sign = 145;
const int RobotmyRequestForm::_exec = 137;

RobotmyRequestForm::RobotmyRequestForm(void) :
	Form("Anonymous", "Shrubbery", RobotmyRequestForm::_sign, RobotmyRequestForm::_exec)
{
	return;
}

RobotmyRequestForm::RobotmyRequestForm(std::string target) :
	Form(target, "Shrubbery", RobotmyRequestForm::_sign, RobotmyRequestForm::_exec)
{
	return;
}


RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm const & src) :
	Form("Anonymous", "Shrubbery", RobotmyRequestForm::_sign, RobotmyRequestForm::_exec)
{
	*this = src;
	return;
}

RobotmyRequestForm::~RobotmyRequestForm(void)
{
	return;
}

RobotmyRequestForm & RobotmyRequestForm::operator=(RobotmyRequestForm const & rhs)
{
	(void)rhs;
	return *this;
}

void RobotmyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	if (rand() % 2 == 1)
		std::cout << "<" << this->getTarget() << "> has been robotomized successfully" << std::endl;
	else
		std::cout << "<" << this->getTarget() << "> Robotomized failed" << std::endl;
}
