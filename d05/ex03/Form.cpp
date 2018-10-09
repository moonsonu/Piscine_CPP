/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:02:46 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:02:47 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException()
{
	return ;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
	return ;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return (*this);
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

Form::GradeTooLowException::GradeTooLowException()
{
	return ;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
	return ;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return (*this);
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

Form::IsNotSignedException::IsNotSignedException(void)
{
	return ;
}

Form::IsNotSignedException::IsNotSignedException(IsNotSignedException const & src)
{
	*this = src;
}

Form::IsNotSignedException::~IsNotSignedException(void) throw()
{
	return ;
}

Form::IsNotSignedException & Form::IsNotSignedException::operator=(IsNotSignedException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Form::IsNotSignedException::what() const throw()
{
	return "Form is not signed";
}

Form::Form() : _target("anonymous"), _name("Form"), _gsign(1), _gexecute(1), _signed(false)
{
	return ;
}

Form::Form(std::string t, std::string n, int s, int e) :_target(t),  _name(n), _gsign(s), _gexecute(e), _signed(false)
{
	if (_gsign < 1 || _gexecute < 1)
	{
		Bureaucrat::GradeTooHighException();
	}
	else if (_gsign > 150 || _gexecute > 150)
		Bureaucrat::GradeTooLowException();
	this->_signed = false;
	return ;
}

Form::Form(Form const &src) : _target(src._target), _name(src._name), _gsign(src._gsign), _gexecute(src._gexecute)
{
	*this = src;
	return ;
}

Form::~Form()
{
	return ;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw Form::IsNotSignedException();
	else if (executor.getGrade() > this->getgradeExecute())
		throw Form::GradeTooLowException();
}

Form & Form::operator=(Form const &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

std::string	Form::getTarget() const
{
	return (this->_target);
}

std::string Form::getName() const
{
	return (this->_name);
}

int			Form::getgradeSign() const
{
	return (this->_gsign);
}

int			Form::getgradeExecute() const
{
	return (this->_gexecute);
}

bool		Form::getSigned() const
{
	return (this->_signed);
}

void		Form::beSigned(Bureaucrat & b)
{
	if (b.getGrade() > this->_gsign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream & operator << (std::ostream & o, Form & f)
{
	o << "name : " << f.getName() << " grade sign : " << f.getgradeSign() << " grade execute : " << f.getgradeExecute() << " sign : " << f.getSigned() << std::endl;
	return (o);
}
