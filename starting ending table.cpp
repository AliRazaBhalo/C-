#include <iostream>
using namespace std;
int main()
{
    int number,start,end;
    cout << "***** Welcome to Table Finder *****" <<endl;
    cout << "Please Enter a number to find it's Table : " ;
    cin >> number;
    cout << "\nEnter Table starting value : ";
    cin >> start;
    cout << "\nEnter Table ending value : ";
    cin >> end;

    for (int i = start ; i<= end ; i++)
    {
        cout << number << " x " << i << " = " << number * i <<endl;
    }
    
}
