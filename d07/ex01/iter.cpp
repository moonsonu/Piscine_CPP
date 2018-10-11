/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:34:37 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/10 17:34:38 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void iter(T *arr, size_t len, void (*func)(T const &))
{
	if (!arr)
		return;

	for (size_t i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

void pInt(int const & i)
{
	std::cout << i << std::endl;
}

void pStr(std::string const & str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	int Int[] = {23, 345, 923};
	std::string Str[] = {"teddy", "mari", "lime", "mung", "neow"};

	std::cout << "*test string* "<< std::endl;
	iter(Str, 5, pStr);
	std::cout << std::endl;

	std::cout << "*test int*"<< std::endl;
	iter(Int, 3, pInt);
	std::cout << std::endl;

	return (0);
}
