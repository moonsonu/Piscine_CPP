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

int		main()
{
	Bureaucrat b1 = Bureaucrat("moo", 150);
	Bureaucrat b2 = Bureaucrat("nyo", 42);

	Form f1 = Form("F1", 10, 70);
	Form f2 = Form("F2", 20, 70);
	Form f3 = Form("F3", 30, 70);


	b1.signForm(f1);
	std::cout << b1;
	std::cout << f1 << std::endl;
	std::cout << std::endl;

	b1.signForm(f2);
	std::cout << b1;
	std::cout << f2 << std::endl;
	std::cout << std::endl;

	b2.signForm(f1);
	std::cout << b2;
	std::cout << f1 << std::endl;
	std::cout << std::endl;

	b2.signForm(f2);
	std::cout << b2;
	std::cout << f2 << std::endl;

	b2.signForm(f3);
	std::cout << b2;
	std::cout << f3 << std::endl;

	b1.signForm(f3);
	std::cout << b1;
	std::cout << f3 << std::endl;


	return (0);

}
