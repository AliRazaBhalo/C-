#include <iostream>
using namespace std;
int main()
{
    int letterCount = 0;
    char ch = 'h';
    char str[100];
    cout << "Enter Your String : ";
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            letterCount++;
            // cout << "Yes " << letterCount << " " << ch << "  is present in your string\n";
        }
        // else
        // {
        //     cout << ch << " letter is not present in your string";
        // }
    }
    if (letterCount <= 0)
    {
        cout << ch << " letter is not present in your string\n";
    }
    else{
            cout << "Yes, " << letterCount << " " << ch << "  is present in your string\n";
    }
}