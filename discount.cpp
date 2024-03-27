#include<iostream>
using namespace std;
int main(){
	int visits, bill1, bill2,bill3,totalBill;
	float discount;
	
	
	cout << "How many times have you visited : ";
	cin >> visits;
	if(visits >= 3){
		
	cout << "Enter your first bill ";
	cin >> bill1;
	cout << "Enter your second bill ";
	cin >> bill2;
	cout << "Enter your third bill ";
	cin >> bill3;
	totalBill = bill1 + bill2 + bill3;
	discount = ( totalBill * 8)/100;
	totalBill = totalBill - discount;
	cout << "Your discount is : " << discount;
	}
	else{
		cout << "Sorry you are not elligible to get discount ";
	}
	
} 
