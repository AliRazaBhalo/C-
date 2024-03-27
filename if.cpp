#include <iostream>
using namespace std;
int main()
{
    // variable declaration => datatype identifier;
    int n;
    cout << "Enter a number ";
    cin >> n;
    if (n > 10)
    {
        cout << "Condition 1 true";
    }
    else if (n > 20)
    {
        cout << "Condition 2 True";
    }

    else{
        cout << "All are false.";
    }
}