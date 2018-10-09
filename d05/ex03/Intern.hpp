/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:04:36 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:04:37 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & rhs);
		typedef Form* (Intern::*intPtr)(std::string);
		Form * makeForm(std::string, std::string);
		Form * searchForm(std::string, std::string);
		Form * Presidential(std::string target);
		Form * RobotmyRequest(std::string target);
		Form * ShrubberyCreation(std::string target);
		intPtr	_function[3];
		static std::string 	_name[3];	
};

#endif
