/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:27:03 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:27:05 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie {
	public:
		Zombie(std::string, std::string);
		Zombie();
		~Zombie();
		std::string			name;
		std::string			type;
		void			setZombieName(std::string);
		void			setZombieType(std::string);
		std::string		announce();
};

#endif
