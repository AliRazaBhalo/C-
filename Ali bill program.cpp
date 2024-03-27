#include<iostream>
using namespace std;
int main()
{
	int unit;
	int bill;
	cout<<"Enter a unit ";
	cin>> unit;
	if (unit<=100)
	{
		bill = unit * 5;
	}
	else if (unit<=200)
	{
		bill = (100 * 5) + (unit - 100) * 8;
	}
	else if (unit<=300)
	{
		bill = (100 * 5) + (100 * 8)+ (unit - 200) * 10;
	}
	else if(unit<=400)
	{
		bill = (100 * 5) + (100 * 8)+ (100 * 10) + (unit - 300) * 15;
	}
	else if(unit <=500)
	{
		bill = (100 * 5) + (100 * 8)+ (100 * 10) + (100 * 15) + (unit - 400) * 20;
	}
	else
	{
		bill = (100 * 5) + (100 * 8)+ (100 * 10) + (100 * 15) + (100 * 20) + (unit - 400) * 25;

	}
	
	cout<< "Price of Consuming unit By This Month Is "<<bill;
	
}
