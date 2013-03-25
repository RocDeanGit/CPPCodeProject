#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H	
class Account
{
public:
	Account();
	Account(int id,double balance,double annualInterestRate);
	int getId();
	void setId(int id);
	double getBalance();
	void setBalance(double balance);
	double getAnnualInterestRate();
	void setAnnualInterestRate(double annualInterestRate);
	double getMonthlyInterestRate();
	void withDraw(double accountValue);
	void deposit(double accountValue);
private:
	int id;
	double balance;
	double annualInterestRate;
};
#endif

