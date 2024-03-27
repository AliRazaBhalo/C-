#include<iostream>
using namespace std;
void ab(int &num1, int &num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
}
int main(){
	int num1 = 10;
	int num2 = 20;
	
	ab(num1,num2);
	cout << num1 <<" " << num2;
}
