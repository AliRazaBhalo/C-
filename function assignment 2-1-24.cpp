#include<iostream>
using namespace std;
int table(int n, int s, int e){
	cout << "Enter Number : ";
	cin >> n;
	cout << "Enter Table Starting value : ";
	cin >> s;
	cout << "Enter Table Ending value : ";
	cin >> e;
	for(int a = s; a <= e ; a++){
		cout << n << " * " << a << endl;
	}
	return 0;
}
int main(){
	table(1,2,3);	
}
