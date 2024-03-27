
#include<iostream>
using namespace std;
int main(){
	double bill;
	int units;
	cout << "Enter Consumed units : ";
	cin >> units;
	if(units <= 100){
		bill = units * 5;
	}
	else if(units <= 200){
		bill = 100 * 5 + (units - 100) * 8;
	}
	else if(units <= 300){
		bill = 100 * 5 + 100 * 8 + (units -200) * 10;
	}
	else if(units <= 400){
		bill = 100 * 5 + 100 * 8 + 100 * 10  + (units -300) * 12;
	}
	else if(units <= 500){
		bill = 100 * 5 + 100 * 8 + 100 * 10 + 100 * 12 + (units -400) * 15;
	}
	else if(units <= 600){
		bill = 100 * 5 + 100 * 8 + 100 * 10 + 100 * 12 + 100 * 15 + (units -500) * 15;
	}
	else if(units <= 700){
		bill = 100 * 5 + 100 * 8 + 100 * 10 + 100 * 12 + 100 * 15 + 100 * 20 + (units - 600) * 25;
	}
	else if(units <= 800){
		bill = 100 * 5 + 100 * 8 + 100 * 10 + 100 * 12 + 100 * 15 + 100 * 20 + (units - 600) * 30;
	}
	cout << "the bill is : " << bill;
}

