/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:50:57 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:50:58 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class		PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const & src);
		~PowerFist();
		PowerFist & operator=(PowerFist const & rhs);

		void		attack() const;
};

#endif
