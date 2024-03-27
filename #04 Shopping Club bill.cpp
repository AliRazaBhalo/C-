#include<iostream>
using namespace std;
int main(){
	int bill;
	int discRate, finalBill;
	cout << "Enter Your bill ";
	cin >> bill;
	if(bill < 500){
		discRate = 5;
		finalBill = bill - (0.05 * bill);
	}
	else if(bill < 1000){
		discRate = 10;
		finalBill = bill - (0.10 * bill);
	}
	else if(bill < 1500){
		discRate = 15;
		finalBill = bill - (0.15 * bill);
	}
	else if(bill < 2000){
		discRate = 20;
		finalBill = bill - (0.20 * bill);
	}
	else{
		discRate = 25;
		finalBill = bill - (0.25 * bill);
	}
	cout << "Your discount rate is " << discRate <<endl;
	cout << "Your actual bill was " << bill << endl;
	cout << "Your final bill is : " <<finalBill << endl;	
}
