/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:33:16 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:33:17 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>
#include <string>

void		Human::meleeAttack(std::string const & target)
{
	std::cout << "meleeAttack -> " << target << std::endl;
}

void		Human::rangedAttack(std::string const & target)
{
	std::cout << "rangedAttack -> " << target << std::endl;
}

void		Human::intimidatingShout(std::string const & target)
{
	std::cout <<"intimidatingShout -> " << target << std::endl;
}

void		Human::action(std::string const & action_name, std::string const & target)
{
	void	(Human::*fptr[3])(std::string const & target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string		attack[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	for (int i = 0; i < 3; i++)
	{
		if (attack[i].compare(action_name) == 0)
			(this->*fptr[i])(target);
	}
}
