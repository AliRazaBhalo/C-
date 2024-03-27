#include<iostream>
using namespace std;
int main(){
	
	/*for(int a = 1 ; a <= 32 ; a++){
		cout << "*";
	}
	
	for(int b = 1 ; b <= 8 ; b++){
		cout << "\n*";
		for(int c = 1 ; c <= 30 ; c++){
			cout << " ";
		}
		cout << "*";
		
	}
		cout << endl;
		for(int a = 1 ; a <= 32 ; a++){
		cout << "*";
		
	}
	
	
	
	for(int a = 1 ; a<=15 ; a++){
		cout << "*";
	}
	cout  << endl;
	for(int b = 1; b<=5 ; b++){
	cout << "*";
	for(int c = 1; c<= 13 ; c++){
		cout << " ";
	}
	
	cout << "*\n";	
	}
	for(int a=1 ; a <= 15; a++){
		cout << "*";
	}
	*/
	int numberofRows, n;
	cout << "Enter First line of Stars : ";
	cin >> n;
	cout << "Enter the number of rows you want to print : ";
	cin >> numberofRows;
	for(int a = 1 ; a <= n ; a++){
		cout << "*";
	}
	cout << endl;
	for(int b = 1 ; b <= numberofRows  ; b++){
		cout << "*";
		for(int c = 1 ; c <= numberofRows  ; c++){
			cout << " ";
		}
		cout << "*";
	cout << endl;
	}
	for(int a = 1 ; a <= n ; a++){
		cout << "*";
	}
	
}
