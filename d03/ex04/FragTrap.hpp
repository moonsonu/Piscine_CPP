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
#include <string>
#include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	private:
		unsigned int	shoutDamage;
        unsigned int	mungDamage;
        unsigned int	meowDamage;
        unsigned int	bangDamage;
        unsigned int	ddongDamage;
	public:
		FragTrap();
		FragTrap(std::string);
		~FragTrap();
		
		void			vaulthunter_doc_exe(std::string const & target);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			intimidatingShout(std::string const & target);
		void			mungAttack(std::string const & target);
		void			meowAttack(std::string const & target);
		void			bangAttack(std::string const & target);
		void			ddongAttack(std::string const & target);
};

#endif
