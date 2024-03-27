#include<iostream>
using namespace std;
int main(){
	int first, second, third, swap;
	cout << "Welcome to swap to values\n";
	cout << "Please Enter Your First Value ";
	cin >> first;
	cout << "Please Enter Your Second Value ";
	cin >> second;
	cout << "Please Enter Your Third Value";\
	cin >> third;
	swap = first;
	first = second;
	second = third;
	//We can swap as much as possible values
	
	second = swap;
	cout << "First value is = " << first <<endl;
      cout  << "Second value is =  " << second <<endl;
      cout << "Third value is =  " << third <<endl;
	cout << "Thank you so much for using my program";
}

