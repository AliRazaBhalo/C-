#include <iostream>
using namespace std;
int main()
{
	int number;
    cout << "***** Welcome to Table Finder *****\n";
    cout << "Please enter a nuber to find table : ";
    cin >> number;
    for (int i = 1; i<= 10; i++)
    {
        cout << number << " x " << i << " = " << number * i <<endl;
    }
    
}
