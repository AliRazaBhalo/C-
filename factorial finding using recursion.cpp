#include <iostream>
using namespace std;
int fact(int n){
if(n > 1)
    return n * fact(n - 1);
else
    return n;
}
int main()
{
	int a;
	cout << "Enter a number : ";
	cin >> a;
	cout << "Factorial (!) of " << a << " is " << fact(a);
	}
