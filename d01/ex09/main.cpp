/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 13:57:31 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 13:57:33 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>
#include <fstream>

int		main()
{
	Logger	l;

	l.log("console", "sdfsdfsdf");
	l.log("file", "23425453");
	return (0);
}
