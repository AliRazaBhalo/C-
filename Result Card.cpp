#include<iostream>
using namespace std;
int main(){
	float obtained, total;
	float per;
	cout << "Welcome to Grade Checker \n";
	cout << "Enter Obtained Marks : ";
	cin >> obtained;
	cout << "Enter Total Marks : ";
	cin >> total;
	per = (obtained / total ) * 100;
	cout << "Your Percentage Marks are " << per << "%";
	if(per > 90 && per <= 100){
		cout << "You got A grade";
	}
	else if(per > 80 && per <= 90){
		cout << "You got B grade";
	}
	else if(per >= 70 && per <= 80){
		cout << "You got C grade";
	}
	else if(per >= 60 && per <= 70){
		cout << "You got D grade ";
	}
	else if(per >= 50 && per <= 60){
		cout << "You got E grade`";
	}
	else{
		cout << "Sorry, You are failed :"; 
		}
	cout << "\n Thank you so much For using our program :) ";
	return 0;
}
