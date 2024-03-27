#include <iostream>
using namespace std;
int main()
{
    int num = 25;
    int *ptr = &num;
    cout << "Addresses of variable num is " << &num;
    cout << "\n Contents of num is " << num;
    cout << "\n Adress of memory location pointed o by ptr is "<< ptr;
    cout << "\n Contents of memory pointed by ptr is " << *ptr;
}