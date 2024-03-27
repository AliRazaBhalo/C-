#include<iostream>
using namespace std;
int square(int a, int b){

	// cout << "Square of ";
	// cout << a;
	// cout << " is ";
	// cout << a*a;
	// cout << endl;
	cout << "Square of " << a << " is " << a*a <<endl;
	cout << "Square of " << b << " is " << b*b <<endl;

	cout << "The Sum of " << a << " + " << b << " Squares are " << (a*a) << " + " << (b*b) << " = " << (a*a) + (b*b);
	return 0;

}
int main(){
// For user defined value
	int first, second;
	cout <<"\tEnter first Number :";
	cin >> first;
	cout <<"\tEnter second number :";
	cin >> second;
// Function to get their square
	square(first, second);
	cout << "";
	return 0;
}
