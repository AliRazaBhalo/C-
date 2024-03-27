#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	int sum, mul;
	int result;
	cout << "Enter first value : ";
	cin >> n1;
	cout << "Enter second value : ";
	cin >> n2;
	cout << "Enter third value : ";
	cin >> n3;
	
	int * ptr1 =  &n1;
	int * ptr2 =  &n2;
	int * ptr3 =  &n3;
	sum = *ptr1 + *ptr2 + *ptr3;
	cout << sum << endl;
	int * sumPtr = &sum;
	cout << "Enter a value for multiply : ";
	cin >> mul;
	int * mulPtr = &mul;
	
	result = *sumPtr * *mulPtr;
	cout << result;
	
}
