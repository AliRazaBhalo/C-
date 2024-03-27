#include<iostream>
using namespace std;
void intro(){
	int aridNo = 4219;
	
	cout << "My name is Ali Raza\n";
	cout << "My arid No is " << aridNo;

}

int intr(int a){
	cout << "My name is Ali Raza\n";
	cout << "My arid No is " << a;
}
int main(){
//	intro();
	int aridNo;
	cin >> aridNo;
	intr(aridNo);
}
