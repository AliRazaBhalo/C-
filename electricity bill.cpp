#include<iostream>
using namespace std;
int main()
{// A PROGRAMM THAT CALCULATE THE ELECRICITY BILL AT DIFFERENT RATE PER UNIT
int unit;
double a,b;
cout<<"Enter the number of consumed unit = ";
cin>>unit;
if (unit<=100)
{a=unit*5;
     cout<<"Total bill is ="<<a<<endl;}
else if(unit>100 && unit<200)
{   a=100*5;
    b=(unit-100)*8+a;
    cout<<"Total bill is ="<<b<<endl;}
else if(unit>200 && unit<500)
{    a=(100*5)+(100*8);
	b=(unit-200)*10+a;
	cout<<"Total bill is ="<<b<<endl;}
else if(unit>500 && unit<=1000)
{   a=(100*5)+(100*8)+(300*10);
    b=(unit-500)*12+a;
    cout<<"Total bill is ="<<b<<endl;}
else
	{a=(100*5)+(100*8)+(100*10)+(100*12);
	b=(unit-1000)*15+a;
	cout<<"Total bill is ="<<b<<endl;}
 return 0;
	 	    
}
