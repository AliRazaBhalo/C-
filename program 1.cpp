#include<iostream>
using namespace std;

int main()
{
    cout << "Welcome to Access an array element by using pointers\n";
    string arr[5]  = {"Umer" , "Fahad" , "Ali Akbar", "Noman" , "Ali Raza"};
    string *arrPtr = arr;
    cout << "Accessed Elements : \n";
    for (int i=0; i < 5; i++)
    {
    cout  << *(i+arrPtr) << endl;
    }
    cout << *(0+arrPtr);
    return 0;
}
