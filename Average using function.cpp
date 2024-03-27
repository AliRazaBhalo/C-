#include<iostream>
using namespace std;
int average();

/*
int main(){
	cout << "Hello World";
	return 0;
	int a =5;
	int b = 10;
	average(a,b);
	
}
int average(a,b){
	int a = 50;
	int b = 40; 
	int sum = a + b;
	float avg = sum/2;
	return avg;
}*/
int main(){
	int num1, num2, num3;
	cout << "Enter first Number : ";
	cin >> num1;
	cout << "Enter second Number : ";
	cin >> num2;
	cout << "Enter third Number : ";
	cin >> num3;
	average(num1, num2, num3);
}
average(a,b,c){
	int sum = a+b+c;
	float avg = sum / 3;
	return avg;	
}
