#include<iostream>
using namespace std;
int main(){
	float farenheit;
	cout << "Enter farenheit ";
	cin >> farenheit;
	float celsius = (farenheit - 32) / 1.8;
	cout  << "The temperature in celsius is " << celsius;
}
