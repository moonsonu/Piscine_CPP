/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:32:29 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/04 14:32:30 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"

class	Fragtrap {
	//Fragtrap(Fragtrap const & f);

	private:
		int				hit;
		int				maxHit;
		int				energy;
		int				maxEnergy;
		int				level;
		int				armor;
	public:
		std::string		name;
		int				meleeDamage;
		int				rangedDamage;
		int				shoutDamage;
		int				mungDamage;
		int				meowDamage;
		int				bangDamage;
		int				ddongDamage;
		
		Fragtrap();
		Fragtrap(std::string);
		~Fragtrap();
	
		//Fragtrap & operator=(Fragtrap const & rhs);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			intimidatingShout(std::string const & target);
		void			mungAttack(std::string const & target);
		void			meowAttack(std::string const & target);
		void			bangAttack(std::string const & target);
		void			ddongAttack(std::string const & target);
		void			vaulthunter_doc_exe(std::string const & target);
		void			getHp();
};

#endif
