#include<iostream>
using namespace std;
int main(){
	int bill;
	cout << "\t***Welcome in shopping club*** \n";
	cout << "Enter Your Bill : ";
	cin >> bill;
	int finalBill; 
	int discRate;
	if(bill < 500){
		discRate = 5;
		finalBill = bill - (0.05  * bill);
	}
	else if(bill < 1000){
		discRate = 10;
		finalBill = bill - (0.10  * bill);
	}
	else if(bill < 1500){
		discRate = 15;
		finalBill = bill - (0.15  * bill);
	}
		cout << "You discount rate is " << discRate  << "%\n";
		cout << "Your bill after discount is  : " << finalBill <<endl;

}
