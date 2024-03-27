#include<iostream>
using namespace std;
int main(){
	int number, oper;
	cout << "Enter a number to find either it is even / odd number :  ";
	cin >> number;
//	cout << "Enter e for even and o for odd";
//	cin >> oper;
//Different methods can be used for this purpose
	if(number % 2 == 0 ){
	// if(number % 3 == 1 ){
		cout << number << " is even\n" ;
	}
	else {
		
		cout << number << " is odd\n"; 
	}
}
