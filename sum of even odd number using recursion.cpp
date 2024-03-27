#include<iostream>
using namespace std;
int sumOfNumbers(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    int sum = n + sumOfNumbers(n-2);
    return sum;
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n; 
    if (n % 2 ==0)
    {
    cout << "Sum of first " << n << " Even Number is " <<   sumOfNumbers(n);    
    }
    else
    {
    cout << "Sum of first " << n << " Odd Number is " <<   sumOfNumbers(n);       
    }
    
}
