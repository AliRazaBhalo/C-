#include<iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter a number to Inverse it : ";
	cin >> number;
	cout << ((number % 10) * 100) + ((number / 10 ) % 10 * 10)  + ((number / 100))  ;
}
