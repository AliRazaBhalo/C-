#include<iostream>
using namespace std;
int main(){
	int a[] = {1,2,2,3,3,4,4,5,5,6};
	int size = 10;
	for(int i = 0; i <= size; i++){
		for(int j = i+1; j <= size ; j++){
			if(a[i] == a[j]){
				cout << a[i] << " is duplicate \n";
			}
			break;
		}
	}
}

