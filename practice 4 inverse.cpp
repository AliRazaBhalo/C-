#include<iostream>
using namespace std;
int main(){
	int number,num2; 
	cout << "Enter first number : ";
	cin >> number;
	cout << "Enter Second Number : ";
	cin >> num2;
	cout << "Inverse of " << number << " " << ((number % 10 ) * 100) + ((number / 10) % 10 * 10) + (number / 100) <<endl; 
	cout << "Inverse of " << num2 << " " << ((num2 % 10 ) * 100) + ((num2 / 10) % 10 * 10 ) + (num2 / 100) << endl;
	
}
