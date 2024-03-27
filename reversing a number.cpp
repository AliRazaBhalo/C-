#include<iostream>
using namespace std;
int main(){
	int number, a,b;
	cout << "Enter a number : ";
	cin >> number;
	a = number / 100;
	number = number % 100;
	b = number / 10;
	number = number % 10;
	cout << number << b << a;	
}
