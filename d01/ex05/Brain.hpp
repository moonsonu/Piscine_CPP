/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:28:14 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:28:16 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <sstream>

class	Brain {
	public:
	Brain();
	~Brain();
	std::string		getString();
	std::string		identify();
	std::string		str;
};

#endif
