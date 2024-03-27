#include<iostream>
using namespace std;
int main()
{
	int cash,bill,disc,returnamount,a,b;
	cout<<"Enter Total Cash = ";
	cin>>cash;
	cout<<"Bill Before Discount = ";
	cin>>bill;
	
	if(bill>=35000)
	{
	disc=bill*0.3;
	a=bill-disc;
	b=cash-a;
	cout<<"30% Discount is ="<<disc<<endl;
	cout<<"Bill After Discount is ="<<a<<endl;
	cout<<"Return Amount is ="<<b<<endl;
	
	}
	else if(bill>=25000 && bill<35000)
	{
	disc=bill*0.25;
	a=bill-disc;
	b=cash-a;
	cout<<"25% Discount is ="<<disc<<endl;
	cout<<"Bill After Discount is ="<<a<<endl;
	cout<<"Return Amount is ="<<b<<endl;
	
	}
	else if(bill>=20000 && bill<25000)
	{
	disc=bill*0.2;
	a=bill-disc;
	b=cash-a;
	cout<<"20% Discount is ="<<disc<<endl;
	cout<<"Bill After Discount is ="<<a<<endl;
	cout<<"Return Amount is ="<<b<<endl;
	
	}
    else if(bill>=15000 && bill<20000)
	{
	disc=bill*0.15;
	a=bill-disc;
	b=cash-a;
	cout<<"15% Discount is ="<<disc<<endl;
	cout<<"Bill After Discount is ="<<a<<endl;
	cout<<"Return Amount is ="<<b<<endl;
	
	}
	else
	{
	disc=bill*0.1;
	a=bill-disc;
	b=cash-a;
	cout<<"10% Discount is ="<<disc<<endl;
	cout<<"Bill After Discount is ="<<a<<endl;
	cout<<"Return Amount is ="<<b<<endl;

	}
	
	
}
