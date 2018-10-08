/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:02:08 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:02:09 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class	Bureaucrat {
	private:
		std::string		_name;
		int			_grade;
		int			_range;
	public:
		void	GradeTooHighException();
		void	getName();
		void	getGrade();
		std::ostream & operator<<(std::string &o, Bureaucrat const &b);
};

#endif
