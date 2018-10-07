/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:49:34 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:49:35 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class		Peon: public Victim
{
	private:
		Peon();
	public:
		Peon(std::string const name);
		Peon(Peon const & src);
		~Peon();
		
		Peon & operator=(Peon const & rhs);
		void		polymorph() const;
};

#endif
