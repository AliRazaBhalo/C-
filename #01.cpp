#include<iostream>
using namespace std;
int main(){
	cout << "How to access an array element using pointers\n";
	int numbers[] = {1,2,3,4,5};
	int *ptr = &numbers[2];
	cout << *ptr;
}
