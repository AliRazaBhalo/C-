#include<iostream>
using namespace std;
int main(){
	string names[] ={
	"Ali Raza",
	"Hassan",
	"Harry",
	"Gulzaib",
	"Ahmad Shahid"
	};
	string tempValue;
	int tempIndex;
	cout << "Enter a Name : ";
	cin >> tempValue;
	cout << "Enter where you want to index : ";
	cin >> tempIndex;
	for(int i = 0; i <= 5 ; i++){
		cout <<i << ". " << names[i] << endl;
	}
	

	names[tempIndex] =tempValue;
	cout << "Your index is " << tempIndex << " And the value is " << names[tempIndex];
	
	
}
