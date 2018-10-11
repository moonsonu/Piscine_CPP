/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:36:33 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/10 17:36:35 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template	<typename T>
class	Array {
	private:
		T 				*_arr;
		unsigned int	_n;
	public:
		Array<T>()
		{
			_arr = NULL;
			return ;
		}

		Array<T>(unsigned int n)
		{
			_n = n;
			_arr = new T[_n];
		}

		Array<T>(Array<T> const &src)
		{
			*this = src;
			return ;
		}

		Array<T> &operator=(Array const &rhs)
		{
			this->_n = rhs._n;
			this->_arr = new T[this->_n];
			for (int i = 0; i < this->_n; i++)
				this->_arr[i] = (rhs._arr[i]);
			return (*this);
		}

		T &operator[] (unsigned int n)
		{
			if (n >= _n)
				throw std::exception();
			return (_arr[n]);
		}

		unsigned int size() const
		{
			return (_n);
		}
};

#endif
