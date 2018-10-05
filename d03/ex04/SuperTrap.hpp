/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:34:16 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:34:18 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class		SuperTrap: public NinjaTrap, public FragTrap
{
	public:
		SuperTrap();
		~SuperTrap();
		SuperTrap(std::string);
		void	meleeAttack(std::string const &target);
    	void	rangedAttack(std::string const &target);
};

#endif
