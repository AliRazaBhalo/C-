#include<iostream>
using namespace std;
int main(){
	int number;
	cout << "Enter a number to check either it is prime or not : ";
	cin >> number;
	if(number % 2 !=0 ){
		cout << "Number is Odd ";
	}else
	{
		cout << "Number is Even ";
	}
}
