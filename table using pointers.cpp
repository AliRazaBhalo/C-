#include<iostream>
using namespace std; 
int main(){
	int n, start, end;
	cout << "Enter a number : ";
	cin >> n;
	cout << "Enter starting value : ";
	cin >> start;
	cout << "Enter Ending Value : ";
	cin >> end;
	
	int * numPtr = &n;
	int * startPtr = &start;
	int * endPtr = &end;
	
	for(int i = *startPtr; i <= *endPtr; i++){
		cout << *numPtr << " * " << i << " = " << *numPtr * i << endl;
	}
}
