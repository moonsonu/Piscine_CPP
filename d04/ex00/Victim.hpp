/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:49:18 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:49:20 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class		Victim
{
	private:
		Victim();
	public:
		Victim(std::string const name);
		Victim(Victim const & src);
		virtual ~Victim();
		
		
		virtual void				polymorph() const;
		Victim & operator=(Victim const & rhs);
		std::string			getName() const;
		std::string			name;
};

std::ostream & operator<<(std::ostream & o, Victim const & v);

#endif
