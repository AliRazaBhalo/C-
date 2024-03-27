#include <iostream>
using namespace std;

int RLS(int arr[], int ind, int size, int key) {
    if (ind >= size)
        return -1;
    else if (arr[ind] == key)
        return ind;
    else
        return RLS(arr, ind + 1, size, key);
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
    int res = RLS(arr, 0, size, key);
    if (res != -1)
        cout << "Element on index no: " << res << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}


