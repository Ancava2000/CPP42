// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	// Acount::t = Account
	typedef Account		t;

	// Getters for global stadistics
	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	// Main function to display global stadistics -> nb_Accounts and totals
	static void	displayAccountsInfos( void );

	// Public Constructor, create an account with a deposit
	Account( int initial_deposit );

	// Destructor, close the accounts when the main ends
	~Account( void );

	// Public functions
	// Add deposits to account -> _nbDeposits _totalNbDeposits
	void	makeDeposit( int deposit );
	// Substract withdrawal, returns true or false (withdrawal refused) 
	// -> _nbWithdrawals _totalNbWithdrawals
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	// Print single account data -> index, amount, nb_deposits and nbwithdrawals
	void	displayStatus( void ) const;


private:

	//Private static global members, one copy for the class, obtained via getters or class
	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	// Timestamp
	static void	_displayTimestamp( void );

	// Members for each instance
	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	// It forces the use of the public constructor with an initial balance
	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
