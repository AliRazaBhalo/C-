#include <iostream>
using namespace std;
int main()
{
    // What is Pointer arithmetic
    // Formula :  address new = currAddress + i * sizeof(datatype);
    
    // Pointers and arrays

    int marks[] = {23, 24, 25, 26};
    int *p = marks;

    // cout << "The value at marks[0] is " << *(p + 0) << endl;
    // cout << "The value at marks[1] is " << *(p + 1) << endl;
    // cout << "The value at marks[2] is " << *(p + 2) << endl;
    // cout << "The value at marks[3] is " << *(p + 3) << endl;
    // cout << "The value at marks[0] is " << *(p + 4);

    // for (int i = 0; i< 4; i++)
    // {
    //     cout << "The value at marks[" << i<< "]" << " is " << *(p + i) <<endl;
    // }
    
    for (int i = 0; i < 4; i++)
    {
        cout << "The value at marks[" << i<< "]" << " is " << *(p + i) <<endl;
        
    }
    
}
