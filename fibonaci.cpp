#include<iostream>
using namespace std;
int main(){
	int size;
	int seri[size] = {};
	for(int i = 0; i < 2; i++){
		cout << "Enter Your " << i << " element of series : ";
		cin >> seri[i];
	}
	cout << "Fibonnaci series is : " << seri[0] << "," << seri[1];
	for(int a = 0 ; a < size ; a++){
		int result = seri[a] + seri[a+1];
		cout << result;
	}
}
