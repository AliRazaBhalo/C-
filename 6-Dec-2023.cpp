#include<iostream>
using namespace std;
int main(){
	int i = 1;
//	More than one variables can be declared in an initialization line of code
//Initialization portion executes for only one time
// Control directly goes to increment / decrement after executing the body
// Condition is checked more than one time incre/decrement 
/*	for(int j = 5; ((i<=10) && j <= 10 ); i++, j++){
		cout << "My name is Ali \n";
		//It will execute only six times 
	}*/
	
	//first of all made program simple
	
/*		for(int j = 5; ((i<=10) && j <= 10 ); i++, j++){
		cout << "My name is Ali \n";
		j++;
		//It will execute only three times 
	}*/
	for(int a = 5; a>= 1 ; a++){
		for(int b = 5; b >= a ; b++){
			cout << "*\n";
		}
	}
	
}
