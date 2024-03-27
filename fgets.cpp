#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch[] = "";
    fgets(ch, 100, stdin);
    int length = strlen(ch);
   cout << length;
}