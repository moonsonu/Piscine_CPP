/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:50:21 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:50:23 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class		AWeapon
{
	private:
		std::string		_name;
		int				_damage;
		int				_apcost;
	protected:
		AWeapon();
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & src);
		virtual ~AWeapon();
		AWeapon & operator=(AWeapon const & rhs);
		std::string	const getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;
		void			setName(std::string);
		void			setDamage(int);
		void			setAPCost(int);
};

#endif
