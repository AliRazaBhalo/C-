//find the largest number in array

#include<iostream>
using namespace std;
int main()
{
	int arr[8]={10,5,56,15,30,34,12,20};
	int max=arr[0];
	for(int i=1;i<8;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	cout<<"the largest number in array is"<<max<<endl;
	return 0;
}
