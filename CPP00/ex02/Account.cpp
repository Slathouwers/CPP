/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slathouw <slathouw@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:29:00 by slathouw          #+#    #+#             */
/*   Updated: 2022/02/05 21:17:28 by slathouw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <iomanip>
# include <chrono>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


void	Account::_displayTimestamp( void )
{
	//std::cout << "[19920104_091532] ";
	std::chrono::time_point<std::chrono::system_clock> tstamp = std::chrono::system_clock::now();
	std::time_t t_now = std::chrono::system_clock::to_time_t(tstamp);

	tm l_time = *localtime(&t_now);
	
	std::cout << std::setfill('0') << "[" << (l_time.tm_year + 1900)
			<< std::setw(2) << l_time.tm_mon
			<< std::setw(2) << l_time.tm_mday << "_"
			<< std::setw(2) << l_time.tm_hour
			<< std::setw(2) << l_time.tm_min
			<< std::setw(2) << l_time.tm_sec << "] ";
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << initial_deposit << ";"
			<< "created" << std::endl;
	
}

Account::Account()
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:0;" << "created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";"
			<< "closed" << std::endl;
}

int	Account::getNbAccounts( void ) {return (_nbAccounts);}
int	Account::getTotalAmount( void ) {return (_totalAmount);}
int	Account::getNbDeposits( void ) {return (_totalNbDeposits);}
int	Account::getNbWithdrawals( void ) {return (_totalNbWithdrawals);}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";"
			<< "total:" << Account::_totalAmount << ";"
			<< "deposits:" << Account::_totalNbDeposits << ";"
			<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "p_amount:" <<  this->_amount << ";"
			<< "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "p_amount:" <<  this->_amount << ";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";"
				<< "amount:" << this->_amount << ";"
				 << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}

int		Account::checkAmount( void ) const	{return (this->_amount > 0);}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			 << "amount:" << this->_amount << ";"
			 << "deposits:" << this->_nbDeposits << ";"
			 << "withdrawals:" << this->_nbWithdrawals << std::endl;
}