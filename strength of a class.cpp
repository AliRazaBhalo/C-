#include<iostream>
using namespace std;
int main(){
	int strength;
	cout << "Enter Class Strength ";
	cin >> strength;
	if(strength >= 41 && strength <= 51){
		cout << "Excellent";
	}
	
	else if(strength >= 31 && strength <= 41){
		cout << "Good";
	}
	
	else if(strength >= 21 && strength <= 31){
		cout << "Average";
	}
	
	else if(strength >= 11 && strength <= 21){
		cout << "Bad";
	}
	
	else if(strength >= 0 && strength <= 11){
		cout << "Worst";
	}
	
}
