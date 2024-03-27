#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter a number : ";
	cin >> n;
	cout << "Reversed is " << ((n% 10 ) * 100) + (n/10 ) % 10 * 10 + (n / 100);
}
