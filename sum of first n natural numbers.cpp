#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int sum = 0;
    for(int c = 1; c<= n; c++){
     sum = sum + c;
    }
    cout << "Sum of first " << n << " natural numbers are " << sum;
}