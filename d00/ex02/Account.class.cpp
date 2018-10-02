/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:22:27 by ksonu             #+#    #+#             */
/*   Updated: 2018/10/02 12:04:53 by ksonu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.class.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

void		Account::_displayTimestamp()
{
	time_t		curr_time;
	struct tm	*curr_tm;

	curr_time = time(0);
	curr_tm = localtime(&curr_time);

	std::cout << "[" << curr_tm->tm_year + 1900 << curr_tm->tm_mon + 1 << curr_tm->tm_mday << "_" << curr_tm->tm_hour << curr_tm->tm_min << curr_tm->tm_sec << "] ";
}

void		Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "account:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void		Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void			Account::makeDeposit(int deposit)
{
	this->_nbDeposits += 1;

	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" << this->_amount << ";deposits:" << deposit << ";amount:" << (this->_amount + deposit) << ";nb_deposits:" << this->_nbDeposits << std::endl;

	this->_amount += deposit;
}

bool			Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if ((this->_amount - withdrawal) < 0)
	{
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << withdrawal << ";withdrawal:refuesd" << std::endl;
	return (false);
	}

	this->_nbWithdrawals += 1;

	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << (this->_amount - withdrawal) << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
	this->_amount -= withdrawal;
}

int				Account::checkAmount(void) const
{
	return (0);
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_nbAccounts << ";amount:" << this->_amount << ";created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += this->_amount;
}

Account::~Account()
{
	this->_nbAccounts -= 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_nbAccounts << ";amount:" << Account::_totalAmount << ";closed" << std::endl;
}
