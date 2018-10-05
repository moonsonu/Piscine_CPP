/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:33:27 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:33:28 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	Claptrap 
{
	protected:
		std::string		name;
		unsigned int	hit;
		unsigned int	maxHit;
		unsigned int	energy;
		unsigned int	maxEnergy;
		unsigned int	level;
		unsigned int	meleeDamage;
		unsigned int	rangedDamage;
		unsigned int	armor;
	
	public:
		Claptrap();
		Claptrap(std::string);
		~Claptrap();

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName();
		unsigned int	getMeleeDamage();
		unsigned int	getRangedDamage();
		void			getHp();
};

#endif
