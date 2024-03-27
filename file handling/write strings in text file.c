#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
   FILE * out;
   char ch[25];
   out = fopen("C:\\Users\\Tech Planet\\Downloads\\ALIRAZ.txt","a");
   printf("Enter a character : ");
   gets(ch);
   for (int  i = 0; i < 3; i++)
    {
    fputs(ch, out);
    fputs("\n", out);
    gets(ch);
   }
   fclose(out);
}