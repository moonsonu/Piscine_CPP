/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:51:48 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:51:49 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class		RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const & src);
		RadScorpion & operator=(RadScorpion const & rhs);
		~RadScorpion();
};

#endif
