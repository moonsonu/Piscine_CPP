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
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main()
{
	{
		Bureaucrat					b1("B1", 1);
		try
		{

			ShrubberyCreationForm	 	test01("shrubbery1");
			RobotmyRequestForm	 		test02("robot1");
			PresidentialPardonForm	 	test03("presidential1");

			std::cout << b1 << std::endl;
			std::cout << test01 << std::endl;
			std::cout << test02 << std::endl;
			std::cout << test03 << std::endl;

			b1.signForm(test01);
			b1.signForm(test02);
			b1.signForm(test03);

			b1.executeForm(test01);
			b1.executeForm(test02);
			b1.executeForm(test03);

		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	{
		try
		{

			Bureaucrat					b2("B2", 100);
			ShrubberyCreationForm	 	test01("shrubbery2");
			RobotmyRequestForm	 		test02("robot2");
			PresidentialPardonForm	 	test03("presidential2");

			std::cout << b2 << std::endl;
			std::cout << test01 << std::endl;
			std::cout << test02 << std::endl;
			std::cout << test03 << std::endl;

			b2.signForm(test01);
			b2.signForm(test02);
			b2.signForm(test03);

			b2.executeForm(test01);
			b2.executeForm(test02);
			b2.executeForm(test03);

		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}

	return (0);
}
