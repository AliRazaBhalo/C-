#include<iostream>
using namespace std;
int main(){
	int v, b1, b2,b3,bill;
	float d;
	
	
	cout << "No of times";
	cin >> v;
	if(v >= 3){
		
	cout << "Enter your first bill ";
	cin >> b1;
	cout << "Enter your second bill ";
	cin >> b2;
	cout << "Enter your third bill ";
	cin >> b3;
	bill = b1 + b2 + b3;
	d = ( bill * 8)/100;
	cout << "Your discount is : " << d;
	}
	else{
		cout << "Sorry you are not elligible to get discount ";
	}
	
} 

