#include<iostream>
using namespace std;
void discount()
{
	int item1,item2,dis;
	cout<<"Enter the price of first item :";
	cin>>item1;
	cout<<"Enter the price of second item :";
	cin>>item2;
	cout<<"You have got 40% discount"<<endl;
	cout<<"Total price is "<<item1+item2<<endl;
	dis = (item1+item2)*0.4;
	cout<<"Discount price is "<<dis<<endl;
	cout<<"Total price after discount is "<<(item1+item2)-dis<<endl;
	
}
int main()
{
	int items;
	cout<<"Enter the number of items :";
	cin>>items;
	if(items==2)
	{
		cout<<"You are eligible for this discount offer"<<endl;
		discount();
	}
	else{
		cout<<"You are not eligible for this discount offer. ";
	}
}
