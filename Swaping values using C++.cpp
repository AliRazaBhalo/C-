#include<iostream>
using namespace std;
int main(){
	int first, second, swap;
	cout << "Welcome to swap to values\n";
	cout << "Please Enter Your First Value ";
	cin >> first;
	cout << "Please Enter Your Second Value ";
	cin >> second;
	swap = first;
	first = second;
	second = swap;
	cout << "First value is = " << first <<endl << "Second value is =  " << second <<endl;
	cout << "Thank you so much for using my program";
}
