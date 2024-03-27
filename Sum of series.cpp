#include<iostream>
using namespace std;
int main(){
	float a = 1;
	float end,sum;
	cout << "Enter Ending Denominator n : ";
	cin >> end;
	cout << "The series is : ";
	for(int i = 1; i <= end; i++){
		cout << a << "/" << i << "\t";
		sum += a/i;	
	}	
	cout <<"\nThe Sum of the given series is : " << sum;
}
