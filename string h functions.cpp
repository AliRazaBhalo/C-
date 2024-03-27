#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char oldStr[100] = "Ali ";
    char newStr[] = "Raza";
    // strcpy(newStr, oldStr);
    // 1. strcpy(newStr, oldStr) Copies the second value to the first and also remove all the characters from the first
    puts(newStr);
    // Puts function automatically add \n at the end
    cout << "The Length of oldStr is " << strlen(newStr) << endl;
    // 2. strlen count the number of characters excluding \o null character
    //strcat(first,second); it concadinate one string with another one. As a result the value of first string would be the concadinated string
    // One thing to remember that the size of 1st must be greater than or equal to length1 + length2 
    strcat(oldStr, newStr);
    puts(oldStr);

    // strcmp string compare
    // It compare ASCII values of first character of string. 
    // If same strings then it will return 0
    // If it return +ve value then the first is greater than second
    // If it return -ve value then the first is less than second A = 65 
    cout << strcmp(newStr, oldStr);
    // If the characters are same it check till the character will be different

}