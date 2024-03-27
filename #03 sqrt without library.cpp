#include<iostream>
using namespace std;
int sqrt(int n){
	int i;
	for (i =1 ; i * i < n; i++){}
	return i;
}
int main(){
	int n1,n2,n3;
	cout << "Enter three numbers : ";
	cin >> n1 >> n2 >> n3;
	cout <<"Square root of " << n1 << " is " << sqrt(n1) << endl;
	cout <<"Square root of " << n2 << " is " << sqrt(n2) << endl;
	cout <<"Square root of " << n3 << " is " << sqrt(n3) << endl;
}
