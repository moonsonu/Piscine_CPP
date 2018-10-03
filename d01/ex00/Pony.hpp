/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 09:24:30 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 09:24:35 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

class	Pony{
	public:
		Pony();
		~Pony();
		int		n;

		void	setNum(int num);
		int		getNum();
};


#endif
