#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    char oper;
    cout << "Welcome to C++ Programming \n ";
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter first number : ";
    cin >> num2;
    cout << "Enter Operator (+ - / *) ";
    cin >> oper;
    if(oper == '+'){
        cout << "Result is " << num1 + num2;
    }
    else if (oper == '-')
    {
        cout << "Result is " << num1 - num2;
    }
    else if (oper == '/')
    {
        cout << "Result is " << num1 / num2;
    }
    else if (oper == '*')
    {
        cout << "Result is " << num1 * num2;
    }
    else
    {
        cout << "Sorry you entered a wrong operator";
    }
    
    

    return 0;
}