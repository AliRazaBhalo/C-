#include<iostream>
using namespace std;
int main(){
    int a = 40;
    int b = 20;
    int oper;
    cout <<"1 for addition 2 for sub 3 for mul 4 for divi :";
    cin >> oper;
    switch(oper){
        
        case 1:
        cout << a + b;
        break; 
        case 2:
        cout << a - b;
        break; 
        case 3:
        cout << a * b;
        break; 
        case 4:
        cout << a / b;
        break; 
        default:
        cout << "wrong input";
        
    }
}