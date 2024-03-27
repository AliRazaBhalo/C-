
#include<iostream>
using namespace std;
int main(){
	double units, bill;
	cout << "Enter units : ";
	cin >> units;
	int remain;
	if(units <= 100){
	bill =	units * 5;
	}
	else if(units > 100 || units <= 200){
	remain = units - 100;
	bill =	remain * 8 + 100 * 5;
	}
	else if(units > 200 || units <= 300){
	remain = units - 200;
	bill =	remain * 10 + 100 * 5 +  100 * 8;
	}
	else if(units > 300 || units <= 400){
	remain = units - 300;
	bill =	remain * 12 + 100 * 5 + 100 * 8 + 100 * 10;
	}
	else if(units > 400 || units <= 500){
	remain = units - 400;
	bill = remain * 15 + 100 * 5 + 100 * 8 + 100 * 10 + 100 * 12;
	}
	else{
	remain = units - 200;
	bill =	remain * 20;
	}
	cout << "Your bill is " << units << " = " << bill;

}
