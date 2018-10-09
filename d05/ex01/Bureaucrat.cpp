/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:02:16 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:02:18 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
	return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}
Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rhs)
{
	(void)rhs;
	return (*this);
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(std::string n, int g) : _name(n)
{
	if (g > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (g < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = g;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}

void	Bureaucrat::incrementGrade()
{
	if ((this->_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		(this->_grade)--;
}

void	Bureaucrat::decrementGrade()
{
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		(this->_grade)++;
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::signForm(Form & f)
{
	try
	{
		f.beSigned(*this);
		std::cout << "<" << _name << "> signs <" << f.getName() << ">" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "<" << _name << "> cannot sign <" << f.getName() << "> because <"
				<< e.what() << ">" << std::endl;
	}
}
std::ostream & operator<<(std::ostream &o, Bureaucrat &b)
{
	o << "<" << b.getName() << ">, " << "bureaucrat grade <" << b.getGrade() << ">." << std::endl;

	return (o);
}
