#include <iostream>
using namespace std;
int main()
{
    int mathMarks[] = {33, 34, 35, 36};

    // Definition of array 
    // It is contigeous memory blocks used to store multiple values of a same data type in a single variable
    // if we do it would give 0 value at 0 index

    // mathMarks[0] = 44;
    // mathMarks[1] = 34;
    // mathMarks[2] = 44;
    // mathMarks[3] = 54;
    int i = 0;
    // cout << mathMarks[0];
    // printing by using do while
    /*do
    {
        cout << "The value at " << i << " is " << mathMarks[i] << endl;
        i++;
    } while (i < 4);
    */
    // Printing by using while loop
    
    while (i < 4)
     {
         cout << "The value at " << i << " is " << mathMarks[i] << endl;
         i++;
     }
    

    


}