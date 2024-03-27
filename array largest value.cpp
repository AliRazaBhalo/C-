#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"Enter size of array";
cin>>size;
int arr[size];
cout<<"Enter values of array:";
for(int i=0;i<size;i++)
{
cin>>arr[i];
}
int l_val;
l_val=arr[0];
for(int i=0;i<size;i++)
{
if(arr[i]>l_val)
l_val=arr[i];
}
cout<<"largest value = "<<l_val;
return 0;
}
