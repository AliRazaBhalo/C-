#include<iostream>
using namespace std;
int main(){
	int bill, discount;
	cout << "Bill : ";
	cin >> bill;
	if(bill < 0) {
		cout << "Sorry Wrong input : ";
	}
	else{
		if(bill < 300){
		discount = 0.05;
	}
	else if(bill < 600){
		discount = 0.10;
	}
	else if(bill < 1000){
		discount = 0.15;
	}
	else{
		discount = 0.20;
	}
	}
	int disc = discount * bill;
	int finalbill = (bill - disc);
	cout << "Your actual bill is " << bill <<endl;
	cout << "Your discount rate is " << discount * 100 <<endl;
	cout << "Your total discount is :" << disc  <<endl;
	cout << "Your final bill is : " << finalbill << endl;
	cout << " Thanks for visiting Coding School" ;
}
