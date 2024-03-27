#include<iostream>
using namespace std;
int main(){

	int salary, experience;
	cout << "Enter Your salary : ";
	cin >> salary;
	cout << "Enter Your Experience years : ";
	cin >> experience;
	if(experience >= 5){
		salary = salary + (salary * 5/100);
		cout << "Your salary is increased by 5% \n";
		cout << "Your New salary is " << salary;
	} 
	else{
		cout << "Your salary can't be increased in Sahiwal :)";
	}

}
