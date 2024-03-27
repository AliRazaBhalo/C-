#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout << "Enter n : ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if(n % i ==0){
            cout << n << " is a non prime Number";
            break;
        }
    }
    if(i == n )
    cout << n << " is a prime Number";
    
}