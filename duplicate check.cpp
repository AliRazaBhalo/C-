#include<iostream>
using namespace std;
int main(){
	int a[] = {1,1,1,4,5,6,7,7,7,8,9,};
	for(int i = 0; i <=12; i++){
		
	if(a[i] == a[i-1]){
		cout << a[i] << "is duplicate\n";
	}

	cout << "";
}
}
