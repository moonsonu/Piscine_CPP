/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:26:29 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:26:31 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class	ZombieEvent {
	public:
	ZombieEvent();
	~ZombieEvent();

	std::string		type;
	std::string		setZombieType(std::string str);
	Zombie			*newZombie(std::string name);
	Zombie			*randomChump();
};

#endif
