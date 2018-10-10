/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 13:07:51 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/09 13:07:52 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

#define ALPHNUM "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

struct Data {std::string s1; int n; std::string s2;};

void	*serialize(void)
{
	Data	*ret = new Data;
	for (int i = 0; i < 8; i++)
		ret->s1 += ALPHNUM[rand() % 62];
	ret->n = rand();
	for (int i = 0; i < 8; i++)
		ret->s2 += ALPHNUM[rand() % 62];
	return (ret);
}

Data	*deserialize(void *raw)
{
	Data	*ret = reinterpret_cast<Data*>(raw);
	return (ret);
}

int		main()
{
	srand(time(0));
	
	void	*ser = serialize();
	Data	*des = deserialize(ser);

	std::cout << des->s1 << std::endl;
	std::cout << des->n << std::endl;
	std::cout << des->s2 << std::endl;
	return (0);
}
