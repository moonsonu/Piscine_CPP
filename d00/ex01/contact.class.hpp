/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 19:54:50 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/02 12:04:30 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class	Contact {

public:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	login;
	std::string	postaladdr;
	std::string	email;
	std::string	phonenumber;
	std::string	birthday;
	std::string	favmeal;
	std::string	uwcolor;
	std::string	darksecret;

	void	getfirstname();
	void	getlastname();
	void	getnickname();
	void	getlogin();
	void	getpostaladdr();
	void	getemail();
	void	getphonenumber();
	void	getbirthday();
	void	getfavmeal();
	void	getuwcolor();
	void	getdarksecret();

};

	Contact	addcontact();
	void	searchcontact(Contact *contact, int idx);
#endif
