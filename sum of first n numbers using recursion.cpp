#include<iostream>
using namespace std;
int sumOfNumbers(int n){
    if(n == 1){
        return 1;
    }
    int sum = n + sumOfNumbers(n-1);
    return sum;
}
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n; 
    cout << "Sum of first " << n << " Natural Number is " <<   sumOfNumbers(n);
}
