#include <iostream>
#include <string.h>
using namespace std;
void salting(char arr[])
{
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, arr);
    strcat(newPass, salt);
    puts(newPass);
}
int main()
{
    char pass[100];
    char salt[] = "123";
    cout << "Enter Password : ";
    cin >> pass;
    // Method 1
    /*
    strcat(pass, salt);
    puts(pass);
    */
    //    By using function
    salting(pass);
    char ch[] = "ali raza";
}