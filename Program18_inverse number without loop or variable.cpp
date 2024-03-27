#include<iostream>
using namespace std;
int inversnumber(int n){
if(n == 0)
{
	return 0;
}
else
{
int digit = n%10;
cout<<digit;
inversnumber(n / 10);
}
}


int main()
{
	int number;
	cout<<"Enter a number :";
	cin>>number;
	cout<<"Inverse of the number is : ";
	inversnumber(number);
	return 0;
}
