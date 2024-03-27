#include<iostream>
using namespace std;
int main(){
	float farenheit, celsius;
	cout << "Enter Temperature in farenheit";
	cin >> farenheit;
	cout << "Enter Temperature in celsius";
	cin >> celsius;
	char oper;
	cout << "Press f for farenheit  and c for celsius ";
	cin >> oper;
	if(oper == 'c'){
		celsius = 5/9 *  (farenheit -32);
		cout << celsius;
	}
	else if(oper == 'f'){
		farenheit = celsius * (9/5) + 32;
		cout << farenheit;
	}
	
}
