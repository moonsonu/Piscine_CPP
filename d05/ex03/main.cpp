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

#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int			main()
{
    Form *f1;
    Form *f2;
    Form *f3;
    Form *f4;
    Intern intern;
    Bureaucrat b1 = Bureaucrat("moonyo", 42);

    f1 = intern.makeForm("robotomy request", "moonyo");
    f2 = intern.makeForm("presidential pardon", "moonyo");
    f3 = intern.makeForm("shrubbery creation", "moonyo");
    std::cout << *f1 << std::endl;
    std::cout << *f2 << std::endl;
    std::cout << *f3 << std::endl;

    b1.signForm(*f1);
    b1.executeForm(*f1);

    f4 = intern.makeForm("TEST", "moonyo");

    return (0);
}
