#include <stdio.h>
char printString(char ch[]);
int main()
{
    char firstName[] = "AliRaza";
    char lastName[] = "RazaBhalo";
    printString(firstName);
    printString(lastName);
}
char printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}