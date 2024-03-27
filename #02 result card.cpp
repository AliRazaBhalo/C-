#include<iostream>
using namespace std;
int main(){
	float o,t,p;
	cout << "Enter Obtained Marks ";
	cin >> o;
	cout << "Enter Total Marks ";
	cin >> t;
	p = o/t * 100;
	cout << "\tResult Card \n";
	cout << "Your Obtained Marks   = " << o <<endl;
	cout << "Your Total Marks      = " << t <<endl;
	cout << "Your Percentage Marks = " << p <<endl;
	
}
