/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:26:35 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:26:37 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <string>

int		main()
{

	Zombie		*z1;
	Zombie		*z2;
	Zombie		*z3;
	Zombie		*z4;
	Zombie		*z5;
	Zombie		*z6;
	Zombie		*z7;
	
	ZombieEvent	e1;
	ZombieEvent	e2;
	ZombieEvent	e3;
	
	e1.setZombieType("mung");
	e2.setZombieType("meow");

	z1 = e1.randomChump();
	z2 = e2.randomChump();
	z3 = e3.randomChump();
	z4 = e1.randomChump();
	z5 = e3.randomChump();
	z6 = e2.randomChump();
	z7 = e1.randomChump();
	
	z1->announce();
	z2->announce();
	z3->announce();
	z4->announce();
	z5->announce();
	z6->announce();
	z7->announce();

	delete z1;
	delete z2;
	delete z3;
	delete z4;
	delete z5;
	delete z6;
	delete z7;
	return (0);
}
