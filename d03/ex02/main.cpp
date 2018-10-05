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

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{  
    Claptrap    c1("moonyo");
    Claptrap    c2("mioryou");
	Fragtrap	*f = new Fragtrap("woong");
	Fragtrap	*f2 = new Fragtrap("sdf");

	f->vaulthunter_doc_exe(f2->getName());
    c1.meleeAttack(c2.getName());
    c2.takeDamage(c1.getMeleeDamage());

    c2.rangedAttack(c1.getName());
    c1.takeDamage(c2.getRangedDamage());
	std::cout << c1.getName() << std::endl;
	c1.getHp();
	std::cout << c2.getName() << std::endl;
	c2.getHp();

	delete f;
	delete f2;
}
