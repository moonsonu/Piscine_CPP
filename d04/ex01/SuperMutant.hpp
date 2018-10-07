/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:51:28 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:51:29 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class		SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const & str);
		~SuperMutant();
		SuperMutant & operator=(SuperMutant const & rhs);
		void		takeDamage(int);
		int			_hp;
};

#endif
