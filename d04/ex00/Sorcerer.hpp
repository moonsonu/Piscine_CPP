/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:48:59 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:49:01 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class		Sorcerer {
	public:
		Sorcerer();
		Sorcerer(std::string const name, std::string const title);
		Sorcerer(Sorcerer const & src);
		~Sorcerer();
		
		Sorcerer & operator=(Sorcerer const & rhs);
		void				polymorph(Victim const &) const;
		//std::string			getName() const;
		//std::string			getTitle() const;

		std::string			name;
		std::string			title;
};

std::ostream & operator<<(std::ostream &o, Sorcerer const & s);

#endif
