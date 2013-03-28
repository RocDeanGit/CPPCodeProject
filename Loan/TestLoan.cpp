#include "Loan.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
	fstream fout;
	Loan account[5];
	Loan tmp;		
	double totalLoan;
	cout<<"Select"<<endl;
	cout<<"0.Exit"<<endl;
	cout<<"1.Write"<<endl;
	cout<<"2.Read"<<endl;
	char ch;
	cin>>ch;
	while (true)
	{
		switch (ch)
		{
		case '0':
			return 0;
			break;
		case '1': 
			srand( (unsigned)time(NULL));
			fout.open("Exercise12_6.dat",ios::out|ios::binary|ios::app);
			for(int i=0;i<5;i++){
				account[i]=Loan(rand()%10+1,rand()%10+1,rand()%100000+1);
				fout.write(reinterpret_cast<char *>(&account[i]),sizeof(Loan));
			}	
			fout.close();
			cout<<"finish!!"<<endl;
			break;
		case '2':
			totalLoan=0;
			fout.open("Exercise12_6.dat",ios::in|ios::binary);
			while(!fout.eof()){
				fout.read(reinterpret_cast<char *>(&tmp),sizeof(Loan));
				if (fout.eof())
				{
					break;
				}
				totalLoan+=tmp.getLoanAmount();
				cout<<tmp.getLoanAmount()<<endl;
			}
			cout<<endl<<endl<<totalLoan<<endl;
			fout.close();
			cout<<"finish!!"<<endl;
			break;
		default:
			cout<<"please Again!"<<endl;
			break;
		}
		cin>>ch;
	}
}
