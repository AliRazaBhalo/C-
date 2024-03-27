#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "Enter a " << endl;
	cin >> a;
	cout << "Enter b " << endl;
	cin >> b;
		cout << "Enter c " << endl;
	cin >> c;
	
	if(a<b){
		if(a<c){
			cout << a << "a is the smallest number" ;
		}
		else{
			cout << c << "c is the smallest";
		}
	}
	else{
		if(b<c){
			cout << b << "b is the smallest";
		}
		else{
			cout << c << "c is the smallest";
		}
	}
}
