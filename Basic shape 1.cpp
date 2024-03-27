#include<iostream>
using namespace std;
int main(){
	//Rows are handled by outer loop 
	//Columns are handled by inner loops 
	//Inner loop executes its maximum possible values When outer loop run for once
/*	for(int i = 1 ; i<=5 ; i++){
		for(int j = i ; j > 0 ; j--){
			cout << "*";
		}
		cout <<endl;
	}*/
	
	for(int i = 1 ; i<=5 ; i++){
	/*	for(int k = 5-i ; k>0 ; k--){
			cout << " ";
		}
		// The above loop is to 
		for(int j = i ; j > 9 ; j--){
			cout << "*";
		}
		cout << endl;
	}
	*/
	cout << "Rectangle shapes\n";
	for(int i = 1 ; i <= 3 ; i++){
		for(int j = 6; j >= 0  ; j--){
			cout << "*";
		}
		cout << endl;
	}
	for(int a = 1; a <= 3 ; a++){
		for(int b = 5; b>0 ; b--){
			cout << "*";
		}
		cout <<endl;
		}
	
	}
}