#include <iostream>
using namespace std;
int main()
{

    cout << "Smallest Number Check using ternary Operator \n";
    int a, b;
    cout << "Enter a ";
    cin >> a;
    cout << "Enter b ";
    cin >> b;
    int res = (a < b) ? a : b;
    cout << "Smallest Number is " << res;
    return 0;
}