#include<iostream>
using namespace std;
int main(){
    int index;
    int arr[] = {1,2,3};
    cout << arr[1,2,3];
    cout << "Enter index value : ";
    cin >> index;
    int *ptr = &arr[index];
    cout << "The value on index "<< index << "is " << *ptr;
    
}