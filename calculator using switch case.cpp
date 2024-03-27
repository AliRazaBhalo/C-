#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter Two Numbers : ";
    cin >> num1 >> num2;
    char oper;
    // It also can be done by using string method
    //Mostly string does not accept string as single quote
    cout << "Enter an operator : " ;
    cin >> oper;
    switch (oper)
	{
        case '+':
        cout << num1 + num2;
        break;
        case '-':
        cout << num1 - num2;
        break;
        case '/':
        cout << num1 / num2;
        break;
        case '*':
        cout << num1 * num2;
        break;
        default : 
        cout << "Wrong Operator";
        
    }
}
