/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:25:05 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:25:07 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void		memoryLeak()
{
	std::string*	panthere = new std::string("String panther");
	std::cout << *panthere << std::endl;
	delete(panthere);
}
