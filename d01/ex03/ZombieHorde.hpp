/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:27:25 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:27:27 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <string>
#include <iostream>

class	ZombieHorde{
	public:
		ZombieHorde();
		~ZombieHorde();
		ZombieHorde(int);
		std::string	randomChump();
		void		announce();
		Zombie		*zombie;
		int			number;
};

#endif
