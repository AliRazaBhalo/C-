#include<iostream>
using namespace std;
	int a,b;
int main(){
	cout << " *Welcome to Ali's Calcultor*" << endl;
	cout << "Please enter the value of your first number : ";
	cin >> a;
	cout << "\nPlease enter the value of your second number : \n";
	cin >> b;
	cout << "press + for addition" << endl <<"press - for substraction" << endl <<"press / for division" << endl <<"press * for Multiplicationi";
	int operator;
	cin >> operator;
	switch(operator){
		case '+':
			cout << a << " + " << b << " = " << a+b;
			break;
		
		case '-':
			cout << a << " - " << b << " = " << a-b;
			break;
		
		case '/':
			cout << a << " / " << b << " = " << a/b;
			break;
		
		case '*':
			cout << a << " * " << b << " = " << a*b;
			break;
	}  	default :
			cout << "I think, You don't want to Calculate Your Numbers ";
	
	
}
