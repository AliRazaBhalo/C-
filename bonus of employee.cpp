#include<iostream>
using namespace std;
int main()
{
	int s,y,b;
	cout<<"enter salary of employee";
	cin>>s;
	cout<<"enter yaer of employee";
	cin>>y;
	if(y>5)
	{
		b=s*5/100;
	}
	cout<<"bonus of employee is"<<b<<endl;
	return 0;
}
