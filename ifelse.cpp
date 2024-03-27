#include <iostream>
using namespace std;
int main()
{
    // You are goint to date based on savings
    int savings;
    cout << "Enter savings : ";
    cin >> savings;
    if (savings >= 5000)
    {
        if (savings >= 10000)
        {
            cout << "You shoud go neha on a road trip";
        }
        else
        {
            cout << "You should go with Neha on shopping";
        }
    }
    else if (savings >= 2000)
    {
        cout << "You can go with rashni";
    }
    else
    {
        cout << "You should go with friends ";
    }
}
