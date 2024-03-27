#include<iostream>
using namespace std;
void show(string n){
	cout << "My name is " <<n;
}	
int sum(int a,int b){
	int result = a + b;
	return result;
}
int arr(int a[]){
	for(int i = 0; i<= 4; i++){
		cout << a[i] <<endl;
	}
	return 0;
}

int main(){
	//Array
	int even[] = {2,4,6,8,10};
	arr(even);
//	show("Ali");
/*
	string name;
	cout << "Enter Your Name : ";
	cin >> name;
*/
// 			Without using cin 
//	sum(3,4);

// 			By using cin
/*	int a,b;
	cout << "Enter first number : ";
	cin >> first;
	cout << "Enter Second Number : ";
	cin >> second;
*/
//			Method 1
/*
	int res = 	sum(first, second);
	cout << first << " + " << second << " = " << res;
*/ 
//		Method 2

//	cout << sum(a,b);



}
