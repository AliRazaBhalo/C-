#include<iostream>
using namespace std;
int main(){
    // To get address
    int age = 5;
    int *agePtr = &age;
    cout << &age << " " << &agePtr;
}