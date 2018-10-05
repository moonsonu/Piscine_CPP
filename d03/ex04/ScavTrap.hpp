/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:33:06 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:33:07 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class		ScavTrap : public virtual ClapTrap
{
	private:
		void					challenge1(std::string const & target);
		void					challenge2(std::string const & target);
		void					challenge3(std::string const & target);
		void					challenge4(std::string const & target);
		void					challenge5(std::string const & target);
	
	public:
		ScavTrap();
		ScavTrap(std::string);
		~ScavTrap();

		void					challengeNewcomer(std::string const & target);
		void                    rangedAttack(std::string const & target);
		void                    meleeAttack(std::string const & target);
};

#endif
