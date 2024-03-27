#include<iostream>
using namespace std;
int main(){
	int a[] = {1,1,1,1,1,1,1,4,5,6,7,7,7,8,9,0};
	int dup = a[0];
	for(int i = 0; i <= 16; i++){
		if(dup == a[i]){
			cout << a[i] << " is duplicate\n";
		}
	}
}
