#include<iostream>
using namespace std;
int main(){
	int end;
	int sum;
	cout << "Welcome to find the sum of natural number \n";
	cout << "Enter ending natural number : ";
	cin >> end;
	for(int a = 1; a <= end; a++){
		 sum = sum + a;
	}
	cout << "The sum of first " << end << " Natural numbers are : " << sum;
}
