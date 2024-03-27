#include<iostream>
using namespace std;
int main(){
    int a = 4; 
    int b = 10;
    int temp;
    temp = a;
    b = temp;
    a = b;
    cout << "The value of a is " << a << "and the value of b is " << b;

    return 0; 
}