/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:36:33 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/10 17:36:35 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define ALPHA "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

int		main()
{
	srand(time(0));
	try
	{
		Array<int> arr(10);
		for (int i = 0; i < 10; i++)
			arr[i] = rand() % 1000;
		for (int i = 0; i < arr.size(); i++)
			std::cout << "Array[" << i << "] Content: " << arr[i] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Array<char> arr(10);
		for (int i = 0; i < 10; i++)
			arr[i] = ALPHA[rand() % 53];
		for (int i = 0; i < arr.size(); i++)
			std::cout << "Array[" << i << "] Content: " << arr[i] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try
	{
		Array<std::string> arr(5);
		arr[0] = "moo";
		arr[1] = "nyo";
		arr[2] = "mung";
		arr[3] = "meow";
		arr[4] = "sdfsdf";
		for (int i = 0; i < arr.size(); i++)
			std::cout << "Array[" << i << "] Content: " << arr[i] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
