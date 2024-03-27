#include<iostream>
using namespace std;
int main()
{
	int numb;
	cout<<"Enter the year :";
	cin>>numb;
	if(numb%4==0){
		cout<<"It is a leap year";
		
	}
	else{
		cout<<"It is not a leap year";
	}
	return 0;
}
