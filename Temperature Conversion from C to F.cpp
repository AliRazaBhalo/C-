#include<iostream>
using namespace std;
int main(){
	float celsius;
	double farenheit;
	cout << "Enter Temperature in Celsius ";
	cin >> celsius;
	farenheit = (celsius -32) / 1.8;
	cout << farenheit;
	return 0;
}
