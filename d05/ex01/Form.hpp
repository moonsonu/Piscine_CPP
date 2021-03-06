/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:02:52 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:02:53 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:
		class	GradeTooHighException : public std::exception
	{
		public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const & src);
		~GradeTooHighException() throw();
		GradeTooHighException & operator=(GradeTooHighException const & rhs);
		virtual char const *what() const throw();
	};
		class	GradeTooLowException : public std::exception
	{
		public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const & src);
		~GradeTooLowException() throw();
		GradeTooLowException & operator=(GradeTooLowException const & rhs);
		virtual char const *what() const throw();
	};
	private:
		Form();
		const std::string		_name;
		const int				_gsign;
		const int				_gexecute;
		 bool			_signed;
	public:
		Form(std::string, int, int);
		Form(Form const & src);
		~Form();
		Form & operator=(Form const & rhs);
		

		void		beSigned(Bureaucrat & b);
		
		std::string	getName() const;
		int			getgradeSign() const;
		int			getgradeExecute() const;
		bool		getSigned() const;
};

std::ostream & operator << (std::ostream & o, Form & f);
#endif
