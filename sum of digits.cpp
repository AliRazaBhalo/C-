#include<iostream>
using namespace std;
int main(){
	// write a program to find the sum of the digits of a given number by user
	// Variable Declaration
	int n1,n2,n3,n4,n5;
	int sum;
	
	cout << " Welcome to sum Numbers \n";
	cout << "Enter first Number : ";
	cin >> n1;
	cout << "Enter second Number : ";
	cin >> n2;
	cout << "Enter third Number : ";
	cin >> n3;
	cout << "Enter fourth Number : ";
	cin >> n4;
	cout << "Enter fifth Number : ";
	cin >> n5;
	sum = n1 + n2 + n3 + n4 + n5;
	
	cout << "The sum of "<< n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " = " << sum; 
	
	}
