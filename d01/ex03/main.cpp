/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:27:32 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:27:33 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int		main()
{
	ZombieHorde		z1;
	ZombieHorde		z2;

	z1 = ZombieHorde(10);
	z2 = ZombieHorde(5);
	z1.announce();
	z2.announce();
	return (0);
}
