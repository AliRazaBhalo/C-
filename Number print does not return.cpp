#include<iostream>
using namespace std;
string ab(string nam1, string nam2){
	cout << "Enter your first name : ";
	cin >> nam1;
	cout << "Enter your last name: ";
	cin >> nam2;
	return nam1 + nam2;
}
int main(){
	cout << "Your username is : " << ab("Ali", "Ali2");
}
