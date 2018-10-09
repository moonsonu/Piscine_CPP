/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:03:23 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:03:24 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();
		static const int		_sign;
		static const int		_exec;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);

    	void	execute(Bureaucrat const &executor) const;

};

#endif
