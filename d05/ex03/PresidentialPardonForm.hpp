/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:04:09 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/08 13:04:10 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	private:
		static const int _sign;
		static const int _exec;

		PresidentialPardonForm(void);
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

		void execute(Bureaucrat const & executor) const;
};

#endif
