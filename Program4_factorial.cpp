#include<iostream>
using namespace std;
void fn(int num1){
	int num2=1;
	for(int i=1; i<=num1; i++)
	{
	//formula of factorial is
	num2 *= i;
	}
	cout<<"The factorial of the given number "<<num1<<" is "<<num2;
}
int main()
{
	int num1;
	cout<<"Enter the number to find factorial : ";
	cin>>num1;
	fn(num1);
	
	return 0;
}
