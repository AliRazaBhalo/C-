#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter a number : ";
	cin >> n;
	
	for(int i = 1 ; i<=n ; i= i+3 ){
		if(i % 2 ==0 ){
			cout << "Even number is = " << i <<endl;	
		}
		if(i % 2 !=0 ){
			cout << "Odd number is =  " << i <<endl;	
		}
		
//		cout << i <<endl;
	}
}
