#include<iostream>
using namespace std;
int fact(int a){
	int res;
	if(a > 1){
	 res = a * (a-1) * (a-2) * (a-3);
	return a * fact(a-1);
	}
	
}
int main(){
	int n;
	cout << "Welcome to get factorial : ";
	cout << "\n Enter a number to get factorial : ";
	cin >> n;
    cout << "Factorial of " << n << " is " <<	fact(n);
}
