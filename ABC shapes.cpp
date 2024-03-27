#include<iostream>
using namespace std;
int main(){
	
	/* 	A 
		BB
		CCC
		DDDD
		EEEEE
	
	*/
	char a = 'A';
	for(int i = 1 ; i <= 26 ; i++){
		for(int j = 1 ; j <= i ; j++){
			cout << a;		
		}
		a++;
		cout << endl;
	}
	
/*
	A
	AB
	ABC
	ABCD
	ABCDE
*/
	char b = 'A';
	for(int i = 1 ; i <= 26 ; i++){
		for(int j = 1 ; j <= i ; j++){
			cout << b;
			b++;
			
		}
		cout << endl;
		b = 'A';
	}
	
	


	
	
}
