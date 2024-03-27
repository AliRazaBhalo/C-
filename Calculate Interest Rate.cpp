#include<iostream>
using namespace std;
int main(){
	int interest, loan, interestRate;
	int timeSpan;
	interest = 0;
	cout << "Enter your loan : ";
	cin >> loan;
	cout << "Enter You interest rate : ";
	cin >> interestRate;
	cout << "Enter Your time span  (in Years) : ";
	cin >> timeSpan;
	if(interestRate > 0 && interestRate <= 100){
		
//	interest = (loan * interestRate) / 100;
	interest = (loan * interestRate * timeSpan) / 100; 
	cout << "Your Interest is : " << interest;
	}
	else{
		cout << "Please enter a valid interest rate value :)";
	}
}
