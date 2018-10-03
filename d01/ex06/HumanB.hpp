/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:29:09 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:29:11 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class		HumanB {
	public:
		HumanB(std::string);
		HumanB();
		~HumanB();
		void		setWeapon(Weapon&);
		void		attack();
		Weapon		*wb;
		std::string	name;
};

#endif
