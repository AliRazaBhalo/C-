#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter Your age : ";
    cin >> age;
    if(age >= 18){
        cout << "You can drive \n";
    }
    else{
        cout << "You cannot drive ";
    }
}