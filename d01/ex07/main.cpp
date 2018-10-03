/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:32:29 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:32:43 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		main(int ac, char **av)
{
	std::string		filename = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	int				len = s1.length();
	std::string		line;
	std::ifstream	read;
	std::ofstream	write;

	read.open(filename);
	write.open(filename + ".replace");
	if (ac == 4)
	{
		if (read.is_open())
		{
			while (getline(read, line))
			{
				while (line.find(s1) != std::string::npos)
					line.replace(line.find(s1), len, s2);
				write << line;
				write << std::endl;
			}
		}
		else
			std::cout << "unable to open file" << std::endl;
	}
	else
		std::cout << "usage : file str1 str2" << std::endl;
	read.close();
	write.close();
	return (0);
}
