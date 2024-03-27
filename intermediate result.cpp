#include<iostream>
using namespace std;
int main(){
	float om,tm;
	float per;
	cout << "Enter Your Obtained Marks : ";
	cin >> om;
	cout << "Enter Your Total Marks : ";
	cin >> tm;
	cout << "Your Obtained Marks are : " << om << endl;
	cout << "Your total marks was : " << tm << endl;
	cout << "Your marks percentage is : " << (om/tm * 100)<< endl;
}
