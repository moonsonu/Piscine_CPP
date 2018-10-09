/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:03:29 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:03:30 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

const int ShrubberyCreationForm::_sign = 145;
const int ShrubberyCreationForm::_exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("Anonymous", "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form(target, "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec)
{
	return;
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) :
	Form("Anonymous", "Shrubbery", ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec)
{
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	(void)rhs;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::ofstream	f;
	std::string		filename = this->getTarget();
	filename += "_shrubbery";
	f.open(filename);
	f << "  ,d                                     "<< std::endl;
	f << "  88                                     "<< std::endl;
	f << "MM88MMM 8b,dPPYba,  ,adPPYba,  ,adPPYba, "<< std::endl;
	f << "  88    88P'   \"Y8 a8P_____88 a8P_____88 "<< std::endl;
	f << "  88    88         8PP\"\"\"\"\"\"\" 8PP\"\"\"\"\"\"\""<< std::endl;
	f << "  88,   88         \"8b,   ,aa \"8b,   ,aa "<< std::endl;
	f << "  \"Y888 88          `\"Ybbd8\"\'  `\"Ybbd8\"\' "<< std::endl;
	f.close();
}
