#include <iostream>
using namespace std;

int L_search(int arr[], int index, int size, int key) {
    if (index >= size)
        return -1;
    else if (arr[index] == key)
        return index;
    else
        return L_search(arr, index + 1, size, key);
}

int main() {
	int n, key;
	cout<<"Enter array range=";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter key=";
	cin>>key;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = L_search(arr, 0, size, key);
    if (result != -1)
        cout << "Element on index no : " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}