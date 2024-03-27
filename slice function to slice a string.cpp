/*
#include <iostream>
using namespace std;
void slice(char ch[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << ch[i];
    }

}
int main()
{
    char str[100];
    int s, e;
    cout << "Enter your String : ";
    cin >> str;
    cout << "Enter starting : ";
    cin >> s;
    cout << "Enter ending : ";
    cin >> e;
    slice(str, s, e);
}
*/

// Second Method for it
#include <iostream>
using namespace std;
void slice(char arr[], int s, int e)
{
    char newStr[100];
    int i, j;
    for (i = s, j = 0; i <= e; i++, j++) // Variable j is also declared
    {
        newStr[j] = arr[i];
    }
    // Never forget to append \0 null character at the end
    newStr[j] = '\0';
    puts(newStr);
}
int getInput(string input, int n)
{
    cout << "Enter " << input << " : ";
    cin >> n;
    return n;
}
int main()
{
    char str[100];
    int s, e;
    cout << "Enter your String : ";
    // cin >> str; // It can only a single word without any space
    gets(str); // For getting the whole sentences including spaces
    s = getInput("Starting", s);
    e = getInput("Ending", e);
    slice(str, s, e);
}