#include<iostream>
using namespace std;
int main(){
	int year;
	cout << "Enter an year to check either it is a leap year or not : ";
	cin >> year;
	if(year % 4 ==0){
		cout << year << " is a leap year :) \n";
	}
	else {
		cout << year << " is not a leap year ;)\n";
	}
	cout << "Thanks for using my Program. ";

	}
