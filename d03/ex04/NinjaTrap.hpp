/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:33:53 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:33:54 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class		NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap();
		~NinjaTrap();
		NinjaTrap(std::string);

		void		meleeAttack(std::string const &target);
		void		rangedAttack(std::string const &target);
		void		ninjaShoebox(NinjaTrap &attack);
		void		ninjaShoebox(ClapTrap &attack);
		void		ninjaShoebox(FragTrap &attack);
		void		ninjaShoebox(ScavTrap &attack);
};

#endif
