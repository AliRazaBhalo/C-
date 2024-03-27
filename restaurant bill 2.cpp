#include<iostream>
using namespace std;
int main()
{
	float actualBill;
	int discountRate,discount,billAfterDisc;
	cout << "Enter Your Bill : ";
	cin >> actualBill;
	cout << "Your actual bill is " << actualBill << endl;
	if(actualBill < 300){
		discountRate = 5;
		discount = 0.05 * actualBill;
		cout << "Your discount rate is : " << discountRate << "%"  <<endl;
		billAfterDisc = actualBill - discount;
		cout << "bill after discount is : " << billAfterDisc << endl;
	}
	else if(actualBill < 600){
			discountRate = 10;
		discount = 0.10 * actualBill;
		cout << "Your discount rate is : " << discountRate << "%" <<endl;
		billAfterDisc = actualBill - discount;
		cout << "bill after discount is : " << billAfterDisc  << endl;
	}
	else if(actualBill < 1000){
		discountRate = 15;
		discount = 0.15 * actualBill;
		cout << "Your discount rate is : " << discountRate  << "%"<<endl;
		billAfterDisc = actualBill - discount;
		cout << "bill after discount is : " << billAfterDisc  << endl;
	}
	
		cout << "Thank You ";
		return 0;
}
