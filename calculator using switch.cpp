#include <iostream>
using namespace std;
int main()
{
    // int n1, n2;
    // char oper;
    // cout << "Enter 1st number Operator and 2nd Number : ";
    // cin >> n1 >> oper >> n2;

    switch (oper)
    {
    case '+':
        cout << "Addition of "<< n1 << " + " << n2 << " is =  " << n1 + n2;
        break;
    case '-':
        cout << "Subtraction of "<< n1 << " - " << n2 << " is = " << n1 - n2;
        break;
    case '/':
        cout << "Division of "<< n1 << " / " << n2 << " is = " << n1 / n2;
        break;
    case '*':
        cout << "Multiplication of "<< n1 << " * " << n2 << " is = " << n1 * n2;
        break;

    default:
        cout << "You entered a wrong Operator.";
        break;
    }
}