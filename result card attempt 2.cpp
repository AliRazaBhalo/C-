#include<iostream>
using namespace std;
int main(){
	int obtained, total;
	float percentage;
	cout << "Enter Obtained Marks : ";
	cin >> obtained;
	cout << "Enter total marks : ";
	cin >> total;
	percentage = (obtained / total ) * 100;
	switch(obtained){
		if(percentage >= 90){
			cout << "Grade is A";
		}
		else if(percentage >= 80 && percentage < 90){
			cout << "Grade is B";
		}
	}
}
