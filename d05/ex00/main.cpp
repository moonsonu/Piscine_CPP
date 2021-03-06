/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:02:23 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:02:24 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	try
	{
		Bureaucrat	b = Bureaucrat("moo", 150);
		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;

	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	b = Bureaucrat("nyo", 150);
		std::cout << b.getName() << std::endl;
		std::cout << b.getGrade() << std::endl;
		b.decrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;
		b.incrementGrade();
		std::cout << b.getGrade() << std::endl;

	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
