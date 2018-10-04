/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:44:19 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/03 15:44:21 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class		Fixed {
	public:
		Fixed();
		Fixed(const int v);
		Fixed(const float v);
		~Fixed();
		Fixed(Fixed const & f);
		
		Fixed&			operator=(Fixed const & res);
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;

		bool			operator>(Fixed const & res);
		bool			operator<(Fixed const & res);
		bool			operator>=(Fixed const & res);
		bool			operator<=(Fixed const & res);
		bool			operator==(Fixed const & res);
		bool			operator!=(Fixed const & res);

		Fixed			operator+(Fixed const & res);
		Fixed			operator-(Fixed const & res);
		Fixed			operator*(Fixed const & res);
		Fixed			operator/(Fixed const & res);

		Fixed&			operator++();
		Fixed&			operator--();
		Fixed			operator++(int);
		Fixed			operator--(int);

		static Fixed	min(Fixed const & a, Fixed const & b);
		static Fixed	max(Fixed const & a, Fixed const & b);

	private:
		int					fp;
		static const int	fbits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & res);

#endif
