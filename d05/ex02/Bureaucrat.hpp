/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:02:08 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:02:09 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class	Form;

class	Bureaucrat {
	public :
		class	GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			GradeTooHighException(GradeTooHighException const & src);
			~GradeTooHighException() throw();
			GradeTooHighException & operator=(GradeTooHighException const & rhs);
			virtual const char * what() const throw();

	};

		class	GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			GradeTooLowException(GradeTooLowException const & src);
			~GradeTooLowException() throw();
			GradeTooLowException & operator=(GradeTooLowException const & rhs);
			virtual const char * what() const throw();
	};

	private:
		Bureaucrat();
		std::string	_name;
		int			_grade;
	public:
		Bureaucrat(std::string, int);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & rhs);

		void		incrementGrade();
		void		decrementGrade();
		std::string	getName() const;
		int			getGrade() const;
		void		signForm(Form & f);
		void		executeForm(Form const & form);
};

std::ostream & operator<<(std::ostream &o, Bureaucrat &b);

#endif
