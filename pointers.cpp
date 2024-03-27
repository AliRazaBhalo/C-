#include<iostream>
using namespace std;
int main(){
    int in;
    int arr[4] = {1,2,3,4};
    cout << "Enter index (0-3): ";
    cin >> in;
    int *ptr = &in;
    cout << arr[*ptr];
}