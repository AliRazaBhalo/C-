#include<iostream>
using namespace std;
int main(){
	int fibon[i] ={};
	int seri[j] = {};
	int end; 
	cout << "Welcome to find the sum of fibonnaci series : \n";
	cout << "Number of elements in your fibonnaci series : ";
	cin >> end;
	for(int a = 0; a <= end - 1; a++){
		cout << "Enter your " << a << " element of your series : ";
		cin >> seri[a];
	}
	cout << "Fibonnaci version of your series is : ";
	for(int b = 0; b <= j; b++){
		int temp = seri[b] + seri[b+1];
		cout << temp << endl;
	}
}
