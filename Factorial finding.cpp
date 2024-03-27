#include <iostream>
using namespace std;
int main()
{
/*	int number, fact = 1;
	cout << "Enter a number to get its factorial : ";
	cin >> number;
	for(int i = 1 ; i <= number ; i++){
		fact = fact * i;
	}*/
	int fact = 1,number;
	cout << "Enter a number to get its factorial : ";
	cin >> number;
	for(; number > 1 ; number--){
		fact = fact * number;
	}
	cout << "Factorial of  is " << fact;
}
