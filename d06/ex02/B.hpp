/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:32:33 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/10 17:32:34 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
# define B_H

# include "Base.hpp"

class B : public Base
{
	public:
		B(void);
		B(const B &src);
		virtual ~B(void);
		B & operator= (B const &rhs);
};

#endif
