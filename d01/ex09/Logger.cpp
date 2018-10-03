/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 13:57:04 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 13:57:09 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>
#include <sstream>

Logger::Logger()
{
	return ;
}

Logger::~Logger()
{
	return ;
}

std::string		Logger::displayTime()
{
	time_t	curr_time;
	struct tm	*curr_tm;
	char		tm[80];

	curr_time = time(0);
	curr_tm = localtime(&curr_time);
	strftime(tm, 80, "%Y/%m/%d %H:%M ", curr_tm); 
	std::string		dt(tm);
	return (dt);
}

void		Logger::logToConsole(std::string const & message)
{
	std::cout << message << std::endl;
}

void		Logger::logToFile(std::string const & message)
{
	std::ofstream	write("logger", std::ios::out);

	if (write)
		write << message << std::endl;
	write.close();
}

void		Logger::log(std::string const & dest, std::string const & message)
{
	
	void	(Logger::*fptr[2])(std::string const & message) = {&Logger::logToConsole, &Logger::logToFile};
	std::string		logfunc[2] = {"console", "file"};
	std::string		newmessage = makeLogEntry(message);

	for (int i = 0; i < 2; i++)
	{
		if (logfunc[i].compare(dest) == 0)
			(this->*fptr[i])(newmessage);
	}
}

std::string	Logger::makeLogEntry(std::string str)
{
	std::string		newstr;
	newstr = this->displayTime() + str;
	return (newstr);
}
