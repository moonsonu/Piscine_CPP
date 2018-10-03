/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:28:54 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:28:56 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class		HumanA {
	public:
		HumanA(std::string, Weapon&);
		HumanA();
		~HumanA();
		void		attack();
		std::string	name;
		Weapon		&wa;
};

#endif
