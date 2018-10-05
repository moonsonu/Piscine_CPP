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

#include "NinjaTrap.hpp"

int		main(void)
{
    NinjaTrap    c1("moonyoni");
    NinjaTrap    c2("mioryou");
	FragTrap	*f = new FragTrap("woong");
	ClapTrap	*c = new ClapTrap("sdf");

	c1.ninjaShoebox(*f);
	c1.ninjaShoebox(*c);

    c1.meleeAttack(c2.getName());
    c2.takeDamage(c1.getMeleeDamage());

    c2.rangedAttack(c1.getName());
    c1.takeDamage(c2.getRangedDamage());

	delete f;
	delete c;

    return (0);
}
