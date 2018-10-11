/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:32:14 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/10 17:32:20 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
# define A_H

# include "Base.hpp"

class A : public Base
{
	public:
		A(void);
		A(const A &src);
		virtual ~A(void);
		A & operator= (A const &rhs);
};

#endif
