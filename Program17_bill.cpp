#include<iostream>
using namespace std;
int main()
{
	double perunitrate,units;
	cout<<"Enter the per unit rate in rupees : ";
	cin>>perunitrate;
	cout<<"Enter the number of units consumed : ";
	cin>>units;
	cout<<"The total bill is "<<perunitrate*units;
	return 0;
}
