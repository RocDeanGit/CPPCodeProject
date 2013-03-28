#include "Loan.h"
#include <cmath>
using namespace std;
Loan::Loan()
{
	Loan(2.5,1,1000);
}

Loan::Loan(double annualInterestRate,int numberOfYears,double loanAmount)
{
	this->annualInterestRate=annualInterestRate;
	this->numberOfYears=numberOfYears;
	this->loanAmount=loanAmount;
}

double Loan::getAnnualInterestRate()
{
	return this->annualInterestRate;
}

int Loan::getNumberOfYears()
{
	return this->numberOfYears;
}

double Loan::getLoanAmount()
{
	return this->loanAmount;
}

void  Loan::setAnnualInterestRate(double annualInterestRate)
{
	this->annualInterestRate=annualInterestRate;
}

void Loan::setNumberOfYears(int numberOfYears)
{
	this->numberOfYears=numberOfYears;
}

void Loan::setLoanAmount(double loanAmount)
{
	this->loanAmount=loanAmount;
}

double Loan::getMonthlyPayment()
{
	double monthlyInterestRate=annualInterestRate/1200;
	return loanAmount*monthlyInterestRate/(1-(pow(1/(1+monthlyInterestRate),numberOfYears*12)));
}

double Loan::getTotalPayment()
{
	return getMonthlyPayment()*numberOfYears*12;
}