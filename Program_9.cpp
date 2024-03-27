#include<iostream>
using namespace std;
int main()
{
int n,max,i;
cout<<"Enter range of array : ";
cin>>n;
int arr[n];
for(i=0; i<n; i++)
{
cout << "Enter " << i+1 << " value : ";
cin>>arr[i];
}
max=arr[0];
for(i=0; i<n; i++)
{
if(max<arr[i])
max=arr[i];
}
cout<<"Maximum number is : "<<max<<endl;
return 0 ;

}