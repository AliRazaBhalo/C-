#include<iostream>
using namespace std;
void printString(char arr[]){
    // The Most important thing to remember is condition arr[i] != '\0' 
    for (int i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i];
    }
    cout << " ";
    
}
int main(){
    char firstName[10];
    char lastName[20];
    cout << "Enter first Name : ";
    cin >> firstName;
    cout << "Enter Last Name : ";
    cin >> lastName;
    cout << "Your first name is " << firstName << endl;
    cout << "Your last name is " << lastName << endl;

    
    
    printString(firstName);
    printString(lastName);
}