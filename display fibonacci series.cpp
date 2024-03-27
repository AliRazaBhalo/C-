#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;
    int a = 0, b = 1, nextTerm;
    cout << "Fibonacci Series:" <<endl;
    for (int i = 0; i < n; i++) 
	{
        cout << a;
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}
