#include<iostream>
using namespace std;
int main(){
	int num1 , num2;
	cout << "Enter two Number : ";
	cin >> num1 >> num2;
	char ch;
	cout  << "Enter a character ( + for addition - for substraction * for multiplication / for division ) : ";
	cin >> ch;
	if(ch = '+'){
		cout << "Addition is  " << num1 + num2 << endl;
	}
	else if(ch = '-'){
		cout << "Substraction is " << num1 - num2 << endl;
	}
	else if(ch = '*'){
		cout << "Multiplication is " << num1 * num2 << endl;
	}
	else if(ch = '/'){
		cout << "division is " <<  num1 / num2 <<endl;
	}
	else {
		cout << "W9RONG INPUT" <<endl;
		}
	cout << "Thanks for using calculator :"
}
