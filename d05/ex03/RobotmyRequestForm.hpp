/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:03:47 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:03:48 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class	RobotmyRequestForm : public Form
{
	private:
		RobotmyRequestForm();
		static const int		_sign;
		static const int		_exec;
	public:
		RobotmyRequestForm(std::string target);
		RobotmyRequestForm(RobotmyRequestForm const & src);
		~RobotmyRequestForm();
		RobotmyRequestForm & operator=(RobotmyRequestForm const &rhs);

    	void	execute(Bureaucrat const &executor) const;

};

#endif
