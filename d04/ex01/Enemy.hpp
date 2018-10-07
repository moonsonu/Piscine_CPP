/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:51:06 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/05 09:51:07 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class		Enemy
{
	private:
		std::string		_type;
		int				_hp;
	protected:
		Enemy();
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & src);
		virtual ~Enemy();
		Enemy & operator=(Enemy const & rhs);
		std::string const	getType() const;
		int				getHP() const;
		virtual void	takeDamage(int);
		void			setType(std::string);
		void			setHP(int);
};

#endif
