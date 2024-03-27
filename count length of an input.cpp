#include<iostream>
using namespace std;
int countLength(char arr[]){
    // spaces are also counted in it
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}
int main(){
    char ch[] = "";
    gets(ch);
    puts(ch);
    cout << "The length is " << countLength(ch);

}