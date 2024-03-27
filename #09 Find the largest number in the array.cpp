#include<iostream>
using namespace std;
int main(){
	
	int sizeofArray;
	cout << "Enter the size of Array : ";
	cin >> sizeofArray;
	
    int arr[sizeofArray] = {};
	for(int a = 0; a <= sizeofArray - 1; a++){
		cout << "Enter value for " << a << " index is : ";
		cin >> arr[a];
	}
    
    int largest = arr[0]; 
    for (int b = 1; b < sizeofArray; b++) {
        if (arr[b] > largest) {
            largest = arr[b]; 
        }
    }
	
    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}
