#include<iostream>
using namespace std;
int main(){
    int index;
    int size;
    cout << "How to access an array element using pointers\n";
    cout << "Enter size of an array : ";
    cin >> size;

	int numbers[size] = {};
	for(int i = 0; i < size  ; i++){
	    cout << "Enter " << i << " index value : ";
	    cin >> numbers[i];
	}
	cout << "Enter an index value to access (0-"<< size<<") : ";
	cin >> index;
	if(index >= size){
	    cout << "Wrong array index";
	}
	else{
	int *ptr = &numbers[index];
	cout << "value on "<< index << " is "<< *ptr;
	}

}
