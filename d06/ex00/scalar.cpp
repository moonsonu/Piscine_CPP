/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 13:06:59 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/09 13:07:00 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	stochar(std::string str)
{
	char	c;
	std::cout << "char : ";
	try
	{
		c = static_cast<char>(std::stoi(str));
		if (c >= 32 && c <= 127)
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	stoint(std::string str)
{
	int		i;
	std::cout << "integer : ";
	try
	{
		i = static_cast<int>(std::stoi(str));
		std::cout << i << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	stofloat(std::string str)
{
	float	f;
	std::cout << "float : ";
	try
	{
		f = static_cast<float>(std::stof(str));
		std::cout << f << "f" << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	stodouble(std::string str)
{
	double	d;
	std::cout << "double : ";
	try
	{
		d = static_cast<float>(std::stod(str));
		std::cout << d << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
}

int		main(int ac, char **av)
{
	std::string		str = av[1];
	if (ac == 2)
	{
		stochar(str);
		stoint(str);
		stofloat(str);
		stodouble(str);
	}
	else
		std::cout << "usage : ./scalar <str>" << std::endl;
	return (0);
}
