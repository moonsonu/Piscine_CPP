/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:51:59 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:52:02 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>

class		Character
{
	private:
		std::string _name;
		int			_ap;
		AWeapon		*_w;
	protected:
		Character();
	public:
		Character(std::string const & name);
		Character(Character const & src);
		Character & operator=(Character const &rhs);
		~Character();
		void			recoverAP();
		void			equip(AWeapon*);
		void			attack(Enemy*);
		std::string		const getName() const;
		AWeapon*		getWeapon() const;
		int				getAP() const;
};

std::ostream & operator << (std::ostream &o, Character const & c);
#endif
