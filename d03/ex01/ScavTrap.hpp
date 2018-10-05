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
#include "FragTrap.hpp"

class		Scavtrap {
		private:
                int                             hit;
                int                             maxHit;
                int                             energy;
                int                             maxEnergy;
                int                             level;
                int                             armor;
        public:
                std::string             name;
                int                             meleeDamage;
                int                             rangedDamage;

                Scavtrap();
                Scavtrap(std::string);
                ~Scavtrap();
				//Scavtrap & operator=(Scavtrap const & rhs);
                void                    takeDamage(unsigned int amount);
                void                    beRepaired(unsigned int amount);

                void                    rangedAttack(std::string const & target);
                void                    meleeAttack(std::string const & target);
				void					challengeNewcomer(std::string const & target);
				void					challenge1(std::string const & target);
				void					challenge2(std::string const & target);
				void					challenge3(std::string const & target);
				void					challenge4(std::string const & target);
				void					challenge5(std::string const & target);
};

#endif
