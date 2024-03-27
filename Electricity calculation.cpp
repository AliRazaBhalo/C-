#include<iostream>
using namespace std;
int main(){
	double u, b;
	int c;
	cout << "Enter u : ";
	cin >> u;
	if(u <= 100){
	b =	u * 5;
	}
	else if(u > 100 || u <= 200){
	c = u - 100;
	b =	c * 8;
	}
	else if(u > 200 || u <= 300){
	c = u - 200;
	b =	c * 10;
	}
	else if(u > 300 || u <= 400){
	c = u - 300;
	b =	c * 12;
	}
	else if(u > 400 || u <= 500){
	c = u - 400;
	b = c * 15;
	}
	else{
	c = u - 500;
	b =	c * 20;
	}
	cout << "Your bill is " << u << " = " << b;

}
