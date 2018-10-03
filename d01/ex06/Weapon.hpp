/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:29:24 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:29:25 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class		Weapon {
	public:
		Weapon(std::string);
		Weapon();
		~Weapon();
		void			setType(std::string);
		const std::string		&getType();
	private:
		std::string		type;
};

#endif
