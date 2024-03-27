#include<iostream>
using namespace std;
int main()
{
	int num1=0;
	for(int i=1; i<=100; i+=2)
	{
		num1 += i;
	}
	cout<<"The sum of first 100 odd numbers is : "<<num1;
	
	return 0;
}
