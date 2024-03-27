#include<iostream>
using namespace std;
void sum_of_time(int &hours, int &hours1, int &hours2, int &minutes, int &minutes1, int &minutes2, int &seconds, int &seconds1, int &seconds2)
{
	//calculating values
	cout<<"***Enter first value time***"<<endl;
	cout<<"Enter first hours :";
	cin>>hours1;
	cout<<"Enter first minutes :";
	cin>>minutes1;
	cout<<"Enter first seconds :";
	cin>>seconds1;
	cout<<"***Enter Second value time***"<<endl;
	cout<<"Enter second hours :";
	cin>>hours2;
	cout<<"Enter second minutes :";
	cin>>minutes2;
	cout<<"Enter second seconds :";
	cin>>seconds2;
	//summing the values
	seconds=seconds1+seconds2;
	minutes=minutes1+minutes2+(seconds/60);
	hours=hours1+hours2+(minutes/60);
	minutes=minutes%60;
	hours=hours%60;	
}
int main()
{

	int hours,hours1,hours2,minutes,minutes1,minutes2,seconds,seconds1,seconds2;
	sum_of_time(hours, hours1, hours2, minutes, minutes1, minutes2, seconds, seconds1, seconds2);
	cout<<"The total time is "<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds"<<endl;
	
	return 0;
}

