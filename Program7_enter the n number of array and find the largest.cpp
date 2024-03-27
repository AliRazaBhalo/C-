#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter number of arrays : ";
	cin>>a;
	//assigning number of array
	int number_of_arrays[a];
	//inputting values of array
	for(int i=0; i<a; i++)
	{
		cin>>number_of_arrays[i];
	}
	//displaying arrays we have valued
	cout<<"The arrays you have enter are: ";
	for(int i=0; i<a; i++)
	{
	cout<<number_of_arrays[i]<<" ";
	}
	//comparing largest array
	int largest = number_of_arrays[0];
	for(int i=0; i<a; i++)
	{
	if(number_of_arrays[i]>largest){
		largest = number_of_arrays[i];
	}
	}
	cout<<"The largest number of array is : "<<largest;
	return 0;
}
