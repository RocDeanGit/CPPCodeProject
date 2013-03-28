#pragma once
#ifndef LOAN_H
#define LOAN_H
class Loan
{
public:
	Loan();
	Loan(double annualInterestRate,int numberOfYears,double loanAmount);
	double getAnnualInterestRate();
	int getNumberOfYears();
	double getLoanAmount();
	void setAnnualInterestRate(double annualInterestRate);
	void setNumberOfYears(int numberOfYears);
	void setLoanAmount(double loanAmount);
	double getMonthlyPayment();
	double getTotalPayment();
private:
	double annualInterestRate;
	int numberOfYears;
	double loanAmount;
};

#endif