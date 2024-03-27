#include<iostream>
using namespace std;
int fact(int a){
    int res;
    if(a == 0){
        res = 1;
    }
   
    else{
    res = a * fact(a-1);
    }
    return res;
}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    // int res = fact(n);
    cout <<"Factorial of " << n << " is " << fact(n);
}