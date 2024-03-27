#include <iostream>
using namespace std;
int main()
{
	int a = 1,b = 1,c;
	cout << a << "\t" << b << "\t";
	for(int i = 1 ; i <= 7 ; i++){
		c = a + b;
		cout << c << "\t";
		a = b;
		b = c;
	}
	
}
