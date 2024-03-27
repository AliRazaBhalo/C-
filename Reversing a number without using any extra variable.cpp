#include <iostream>
using namespace std;
int main()
{
	int number, a, b;
	cout << "Enter a three digit number : ";
	cin >> a;
	//	a = number / 100;
	//	number = number % 100;
	//	b = number / 10;
	//	number = number % 10;
	cout << "Output is " << (a % 10) * 100 + ((a / 10) % 10) * 10 + ((a / 10) / 10);
}
