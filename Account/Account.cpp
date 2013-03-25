#include "Account.h"
using namespace std;

Account::Account(int id ,double balance,double annualInterestRate)
{
	this->id=id;
	this->balance=balance;
	this->annualInterestRate=annualInterestRate;
}
Account::Account()
{
	Account(0,0,0);
}
int Account::getId()
{
	return this->id;
}

void Account::setId(int id)
{
	this->id=id;
}

double Account::getBalance()
{
	return this->balance;
}

void Account::setBalance(double balance)
{
	this->balance=balance;
}

double Account::getAnnualInterestRate()
{
	return this->annualInterestRate;
}

void Account::setAnnualInterestRate(double annualInterestRate)
{
	this->annualInterestRate=annualInterestRate;
}

double Account::getMonthlyInterestRate()
{
	return this->annualInterestRate/1200;
}

void Account::withDraw(double accountValue)
{
	this->balance-=accountValue;
}

void Account::deposit(double accountValue)
{
	this->balance+=accountValue;	
}

