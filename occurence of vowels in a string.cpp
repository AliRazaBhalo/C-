#include <iostream>
#include <string.h>
using namespace std;

int countVowels(char arr[])
{
    int vowel = 0;
    int aLetters = 0;
    // int length = strlen(arr);
    // we can also use ch[i] != '\0' instead of above line
    for (int i = 0; arr[i] != '\0'/* or length*/ ; i++)
    {
        // If we have to check how many (h, any letter) are there in a string only by changing congition to 
        if (arr[i] == 'a')
        {
            aLetters++;
        }

        if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            vowel++;
        }
    }
    cout << "There are " << aLetters << " a letter in \"" << arr << "\" " << endl;
    return vowel;
}
int main()
{
    char str[100];
    cout << "Enter a String : ";
    gets(str);
    cout << "Total Vowels are " << countVowels(str);
}