#include<iostream>
using namespace std;
int main()
{
	int *ptr,i; // declaring a pointer and i for loop
	int array_1[5]={10,20,30,40,50}; // intializing array
	for(i=0; i<5; i++) // using loop
	{
	ptr = &array_1[i]; //given address to array
		cout<<"The "<<i+1<<" element of array is "<<*ptr<<endl;
	}
return 0;
}
