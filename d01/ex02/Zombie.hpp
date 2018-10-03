/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:25:32 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:25:35 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie {
	public:
		Zombie(std::string, std::string);
		~Zombie();
		std::string			name;
		std::string			type;
		void			announce();
};

#endif
