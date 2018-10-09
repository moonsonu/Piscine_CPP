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
		class	IsNotSignedException : public std::exception
	{
		public:
			IsNotSignedException();
			IsNotSignedException(IsNotSignedException const & src);
			~IsNotSignedException() throw();
			IsNotSignedException & operator=(IsNotSignedException const & rhs);
			virtual const char * what() const throw();
	};
	private:
		Form();
		const std::string		_target;
		const std::string		_name;
		const int				_gsign;
		const int				_gexecute;
		bool					_signed;
	public:
		Form(std::string, std::string, int, int);
		Form(Form const & src);
		virtual ~Form() = 0;
		Form & operator=(Form const & rhs);


		void			beSigned(Bureaucrat & b);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		std::string		getName() const;
		std::string		getTarget() const;
		int				getgradeSign() const;
		int				getgradeExecute() const;
		bool			getSigned() const;
};

std::ostream & operator << (std::ostream & o, Form & f);
#endif
