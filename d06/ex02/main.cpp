/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:33:11 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/10 17:33:13 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void)
{
	Base	*res;
	int		i = rand() % 3;

	if (i == 0)
	{
		std::cout << "Making A class" << std::endl;
		res = new A;
	}
	else if (i == 1)
	{
		std::cout << "Making B class" << std::endl;
		res = new B;
	}
	else
	{
		std::cout << "Making C class" << std::endl;
		res = new C;
	}
	return (res);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "identify from pointer A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "identify from pointer B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "identify from pointer C" << std::endl;
}

void	identify_from_reference( Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "identify from reference A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "identify from reference B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "identify from reference C" << std::endl;
}

int		main(void)
{
	srand(time(NULL));

	Base	*ptr = generate();

	identify_from_pointer(ptr);
	identify_from_reference(*ptr);

	return (0);
}
