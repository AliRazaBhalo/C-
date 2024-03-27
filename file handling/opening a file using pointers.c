#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
   FILE * out;
   char ch;
   out = fopen("C:\\Users\\Tech Planet\\Downloads\\ALIRAZ.txt","a");
   printf("Enter a character : ");
   ch =  getche();
   while(ch != '.'){
    fputc(ch, out);
    ch = getche();
   }
   fclose(out);
}