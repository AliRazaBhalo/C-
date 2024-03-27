#include<iostream>
using namespace std;
int main(){
	int ageInYears;
	cout << "Welcome to calculate your age" << endl;
	cout << "Enter Your age in Years ";
	cin >> ageInYears;
	if(ageInYears <= 1900){
		cout << "Wrong Input";
	}
	else{
		
	int age = 2023 - ageInYears;
	int months = age * 12;
	int days = age * 365;
	int hours = days * 24;
	int min = hours * 60;
	int sec = min * 60;
	
	cout << "Your age is as follows\n" << "Years : " << age <<endl << "Months : " << months  <<endl  << "days : " << days  <<endl  << "hours : " << hours  <<endl << "Minutes : " << min  <<endl << "Seconds : " << sec; 
	}
}
