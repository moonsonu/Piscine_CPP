/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:32:35 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:32:36 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int		main(void)
{
	SuperTrap *s1 = new SuperTrap("moonyo");
	s1->rangedAttack("You");
	s1->meleeAttack("mi");


	ScavTrap sc1 = ScavTrap("mioryou");
	s1->ninjaShoebox(sc1);
	s1->vaulthunter_doc_exe("moonyo");

	delete s1;
	return (0);
}
