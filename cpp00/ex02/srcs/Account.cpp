# include "../includes/Account.hpp"
# include <iostream>
# include <iomanip>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void ) {return (_nbAccounts);}
int		Account::getTotalAmount( void ) {return (_totalAmount);}
int		Account::getNbDeposits( void ) {return (_totalNbDeposits);}
int		Account::getNbWithdrawals( void ) {return (_totalNbWithdrawals);}
int		Account::checkAmount( void )const {return (_amount);}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_amount = initial_deposit;
	_totalAmount+=initial_deposit;
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	const time_t	timer = time(0);
	tm				*time = localtime(&timer);

	std::cout << "[" << 1900 + time->tm_year;
    std::cout << std::setfill('0') << std::setw(2) << 1 + time->tm_mon;
    std::cout << std::setfill('0') << std::setw(2) << time->tm_mday << "_";
    std::cout << std::setfill('0') << std::setw(2) << time->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << time->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << time->tm_sec << "] ";
}



void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << _amount << ";";
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}