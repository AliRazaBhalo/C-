#include<iostream>
using namespace std;
int main()
{
	int obt,ttl;
	cout<<"Enter obtained marks : ";
	cin>>obt;
	cout<<"Enter total marks : ";
	cin>>ttl;
	int* ptr = &obt;
	int* ptr2 = &ttl;
	cout<<"Total marks are "<<*ptr2<<endl;
	cout<<"Obtained marks are "<<*ptr;
}
