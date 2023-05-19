#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

Account::Account(void)
{
	return;
}

void Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm *time = localtime(&now);

	std::cout << std::setfill('0') << "[" << time->tm_year + 1900
		<< std::setw(2) << time->tm_mon + 1
		<< std::setw(2) << time->tm_mday << "_"
		<< std::setw(2) << time->tm_hour
		<< std::setw(2) << time->tm_min
		<< std::setw(2) << time->tm_sec << "] " << std::flush;	
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;	
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:"
		<< _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	if (_amount >= withdrawal)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:"
			<< _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << ";withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
		<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
