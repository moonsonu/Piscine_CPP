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
		Intern & operator=(Intern & rhs);
		Form * makeForm(std::string, std::string);
		Form * searchForm(std::string, std::string);
		Form * Presidential(std::string const & target);
		Form * RobotmyRequest(std::string const & target);
		Form * ShrubberyCreation(std::string const & target);
};

#endif
