#include<iostream>
int main(){
	int number;
	cout << "Enter a number : ";
	cin >> number;
	for(int a = 0 ; a <= number ; a++){
		cout << a % 2;
	}
	return 0;
}
