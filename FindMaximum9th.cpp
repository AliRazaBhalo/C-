#include<iostream>
using namespace std;
int main(){
    int size = 0;
    cout << "Enter Size : ";
    cin >> size;
    int arr[size] = {};
    for(int a = 0; a < size; a++){
        cout << "Enter " << a << "Value : ";
        cin >> arr[a];
    }
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Maximum is " << max ;
}