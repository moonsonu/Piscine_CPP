/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:33:23 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:33:25 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

int			main()
{
	Human	h;

	h.action("meleeAttack", "mung");
	h.action("rangedAttack", "meow");
	h.action("intimidatingShout", "KIN");
	return (0);
}
