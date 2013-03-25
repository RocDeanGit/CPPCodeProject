#include <iostream>
#include "Account.h"
#include <time.h>
using namespace std;
int main(){
	Account acc(1122,20000,4.5);

	tm * gm;
	time_t createTime=time(NULL);
	gm=gmtime(&createTime);
	int year,month,day,hour,min,sec;
	year=1900+gm->tm_year;
	month=1+gm->tm_mon;
	day=gm->tm_mday;
	hour=8+gm->tm_hour;
	min=gm->tm_min;
	sec=gm->tm_sec;

	acc.withDraw(2500);
	acc.deposit(3000);
	cout<<"余额"<<"\t"<<"月利率"<<"\t"<<"账号创建时间"<<endl;
	cout<<acc.getBalance()<<"\t"<<acc.getMonthlyInterestRate()<<"\t"<<year<<"-"<<month<<"-"<<day<<" "<<
		hour<<":"<<min<<":"<<sec<<endl;
	system("Pause");
}