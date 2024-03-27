#include <stdio.h>
int main()
{
    char ch;
    int i = 0;
    char str[100];
    printf("Enter Your Name : ");
    // while (ch != '\n')
    // {
    //     scanf("%c", &ch);
    //     str[i] = ch;
    //     i++;
    // }
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
}