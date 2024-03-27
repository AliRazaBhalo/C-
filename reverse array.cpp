#include<iostream>
using namespace std;
void reverseArr(int arr[], int size){
    int firstVal, secondVal;
    for (int i = 0; i < size/2; i++)
    {
        firstVal = arr[i];
        secondVal = arr[size - i - 1];
        arr[i] = secondVal;
        arr[size-i-1] = firstVal;
    }

}
void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << "\t";
    }
}
int main(){
    int size;
    cout << "Enter size of an array : ";
    cin >> size;
    int arr[size] = {};
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }
    reverseArr(arr, size);
    printArr(arr, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << "\t";
    // }

        // Jb bhi ham array ko function me call krty ha to call by reference hota ha 
        
}