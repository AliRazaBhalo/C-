#include <iostream>
using namespace std;
int main()
{
    // Pointer is a data type which holds the address of other data types
    // Basic syntax : dataType * identifier = &variable name
    int a = 3;
    int *b = &a;
    
    // & is a reference or address operator
    // To get address & is used
    cout << "Address of a is " << b;
    cout << "\nAddress of a is " << &a << endl;

    // * ---- (value at) Dereference operator   
    // To get the value at a specific location or address * is used
    // For value * is used 

    cout << "The value at address " << &a << " is " << *(&b) << endl;
    cout << "The value at address " << b << " is " << a << endl;
    cout << "The value at address " << &b << " is " << *b << endl;

    // Pointer to pointer 
    // We can make pointers of already existing pointer ** is used for it 
    // int * c = &(*b); // The address would remain same and the b pointer would be treated as a variable
    int ** c = &b; // The address would be changed and the b pointer would be treated as a pointer Bcz we used ** operator
    // ** is a pointer to pointer operator
    
    cout << "the address of c is " << c;
        // To get address
    int age = 5;
    int *agePtr = &age;
    // To get Address
    cout << &age << " " << &agePtr;
    cout << &age << " " << agePtr;
    // cout << &age << " " << &agePtr;
}