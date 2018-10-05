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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main()
{

	Fragtrap	f("moonyo");
	Fragtrap	f2("mioryou");
	Scavtrap	s("woong");

	f.rangedAttack(f2.name);
	f.takeDamage(f.rangedDamage);
	f.vaulthunter_doc_exe(f2.name);
	f.getHp();
	f2.meleeAttack(f.name);
	f2.vaulthunter_doc_exe(f.name);
	f2.getHp();
	f.beRepaired(5);
	std::cout << "after repaired : ";
	f.getHp();
	s.challengeNewcomer(f.name);
	s.challengeNewcomer(f2.name);
	return (0);
}
