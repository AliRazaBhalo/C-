#include<iostream>
using namespace std;
void count(int arr[], int size){
    int index = 0;
    for(int i = 0; i <= size; i++){
        for(; size >= 0; size--){
            cout << arr[size] << "\t";
            if (arr[i] == arr[size])
            {
                index++;
                i++;
            }
        }
    }
    cout << "Maximum Repeated Number is repeated " << index << " times";
}
int main(){
    // question 1
    // How many times does a number occures in an array
    int arr[] = {1,2,2,2,2,2,2,2,3,4,5};
    count(arr, 11);
    
}