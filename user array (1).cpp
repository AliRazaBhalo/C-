#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of array Between 1 to 6: ";
    cin >> n; 
    if ( n >= 6)
    {
     cout << "Invalid array."<<endl;
     return 0;
    }
    int array[n];
    for (int i = 0; i < n; i++)
    {
     cout << "Enter element " << i + 1 << ":";
     cin >> array[i];
    }
    cout << "The array elements are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}

