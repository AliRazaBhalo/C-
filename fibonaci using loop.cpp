#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size : (>2) ";
    cin >> size;
    int fib[size];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < size; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        // cout << fib[i] << endl;
    }
    for (int i = 0; i < size; i++)
    {
        cout << fib[i] << "\t";
    }
}