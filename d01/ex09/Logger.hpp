/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 13:57:21 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 13:57:23 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <string>

class	Logger {
	public:
		Logger();
		~Logger();
		void			logToConsole(std::string const & message);
		void			logToFile(std::string const & message);
		std::string		displayTime();
		void			log(std::string const & dest, std::string const & message);
	private:
		std::string	makeLogEntry(std::string);
};

#endif
