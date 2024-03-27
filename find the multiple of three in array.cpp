#include<iostream>
using namespace std;
int MultipleOf3(int arr[], int n){
    int mOf3 = 0;
    for(int i = 0; i <= n; i++){
        if (arr[i] % 3 ==0)
        {
            mOf3++;
        }   
    }
    cout << "Multiple of 3 elements are " << mOf3;
}
int main(){
    int arr[] = {1,3,5,7,9,11,13,15};
    MultipleOf3(arr, 8);
}