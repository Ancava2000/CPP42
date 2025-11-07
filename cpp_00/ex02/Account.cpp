/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarro-v <acarro-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:23:13 by acarro-v          #+#    #+#             */
/*   Updated: 2025/10/30 15:39:02 by acarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime> 
#include "Account.hpp"

// Initialize static private members

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0; 
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor

Account::Account(int initial_deposit):	_accountIndex(_nbAccounts),
										_amount(initial_deposit),
										_nbDeposits(0),
										_nbWithdrawals(0){
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex
				<< ";amount:" << _amount	
				<< ";created\n";								
}

// Destructor

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed\n";
}

// Getters

int Account::getNbAccounts(void){
	return (Account::_nbAccounts);
}

int Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
	return (Account::_totalNbWithdrawals);
}

int Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

// Private function

void Account::_displayTimestamp(void){
	time_t	now;
	struct tm* local_time;
	char	buffer[40];

	now = time(NULL);
	local_time= localtime(&now);
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local_time);
	std::cout << buffer;
}

// Public Functions

int	Account::checkAmount( void ) const{
	return this->_amount;
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount){
		std::cout << ";withdrawal:refused\n";
		return (false);
	}
	else{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}