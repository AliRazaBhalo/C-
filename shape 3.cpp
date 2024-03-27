#include<iostream>
using namespace std;
int main(){
/*	for(int i = 1 ; i <= 5 ; i++){
		for(int k = 5; k >= i ; k--){
			cout << " ";
		}
		for(int j = 1 ; j <= (i * 2 ) -1 ; j++){
			cout << "*";
		}
		cout << endl;
	}
	for(int a = 1 ; a <=5 ; a++){
		for(int b = 5 ; b >= a ; b--){
			cout << " ";
		}
		for(int c = 1 ; c <= (a * 2 ) -1 ; c++){
			cout << "*";
		}
		cout << endl;
	}	
	for(int i = 1 ; i <= 5 ; i++){
		for(int j = 5 ; j >= i ; j--){
			cout << " ";
		}
		for(int k = 1 ; k <= (i * 2 ) -1 ; k++){
			cout << "*";
		}
		cout << endl;

	for(int a = 1 ; a <= 5 ; a++){
		for(int b = 5 ; b >= a ; b--){
			cout << ' ';
		}
		for(int c = 1 ; c <= (a * 2 -1 ) ; c++){
			cout << "*";
		}
		cout << endl;
		
	}
*/


//	cout << "\t For Janiiiiiiiiiiiiiiiiiiz \n";
	int n;
	int a;
	cout << "Enter number of lines you want to print * : ";
	cin >> n;
	for(int a = 1 ; a <= n ; a++){
		for(int b = n ; b >= a ; b-- ){
			cout << " ";
		}
		for(int c = 1; c <= (a * 2) -1 ; c++){
			cout << "*";
		}
		cout << endl;
	}
	for(int a = n ; a >= 0 ; a--){
			cout << " ";
		}
		for(int c = 1; c <= (a * 2) -1 ; c++){
			cout << "*";
		}
		cout << endl;
	}
	
	
	
	

