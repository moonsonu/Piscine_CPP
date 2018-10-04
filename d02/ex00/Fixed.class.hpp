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

class		Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const & f);
		Fixed & operator=(Fixed const & res);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					fp;
		static const int	fbits = 8;
};

#endif
