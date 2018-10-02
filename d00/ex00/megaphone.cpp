/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 19:09:17 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/01 19:09:20 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*megaphone(char *av)
{
	for (int i = 0; i < (int)strlen(av); i++)
	{
		if (av[i] >= 97 && av[i] <= 122)
			av[i] -= 32;
	}
	return (av);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			std::cout << megaphone(av[i]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
