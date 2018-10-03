/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:24:40 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:24:56 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

static void		ponyOnTheHeap()
{
        Pony    *ponyHeap = new Pony();
        ponyHeap->setNum(42);
        std::cout << "Pony in heap" << std::endl;
        std::cout << ponyHeap->getNum() << std::endl;
        std::cout << "Pony address: " << ponyHeap << std::endl;
		delete ponyHeap;
		std::cout << "Pony in heap has been removed" << std::endl;
}

static void    ponyOnTheStack()
{
        Pony    ponyStack;
        ponyStack.setNum(24);
        std::cout << "Pony in stack" << std::endl;
        std::cout << ponyStack.getNum() << std::endl;
}
int				main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
