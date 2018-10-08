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

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat::GradeTooHighException()
{
	
}

void	Bureaucrat::getName()
{
	return (this->_name);
}

void	Bureaucrat::getGrade()
{
	return (this->_grade);
}

std::ostream & Bureaucrat::operator<<(std::string &o, Bureaucrat const &b)
{
	o << "<" << b.getName() << ">, " << "bureaucrat grade <" << b.getGrade() << ">." << std::endl;

	return (o);
}
