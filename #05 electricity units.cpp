#include<iostream>
using namespace std;
int main(){
	int units;
	int bill;
	cout << "Enter your consumed units ";
	cin >> units;
	if( units > 0 && units <= 100){
		bill = units * 5;
	}
	else if(units > 100 && units <= 200){
		bill = 100 * 5 + (units - 100 ) * 8;
	}
	else if(units > 200 && units <= 300){
		bill = 100 * 5 + 100 * 8 + (units - 200) * 10;
	}
	else if(units > 300 && units <= 400){
		bill = 100 * 5 + 100 * 8 + 100 * 10 + (units - 300) * 12;
	}
	else {
		bill = 100 * 5 + 100 * 8 + 100 * 10 + 100 * 12 + (units - 400) * 15;
	}
	cout << "Your bill is " << bill;
}
