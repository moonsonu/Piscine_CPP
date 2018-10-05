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

#include "FragTrap.hpp"

int		main()
{

	Fragtrap	f("moonyo");
	Fragtrap	f2("mioryou");

	f.rangedAttack(f2.name);
	f.takeDamage(f.rangedDamage);
	f.vaulthunter_doc_exe(f2.name);
	f2.meleeAttack(f.name);
	f2.vaulthunter_doc_exe(f.name);
	f.beRepaired(25);
	return (0);
}
