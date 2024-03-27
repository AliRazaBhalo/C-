#include<iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter a number : ";
	cin >> number;
	cout << "The reverse number is " << (number % 10) * 100 + ((number / 10) % 10) * 10 + (number/10) /10; 
}
