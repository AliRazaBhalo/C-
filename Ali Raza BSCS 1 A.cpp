#include<iostream>
using namespace std;
int main()
{
	string tempValue;
	int tempIndex;
	int start, end;
	string names[] ={
	"Ali Raza",
	"Hassan",
	"Harry",
	"Gulzaib",
	"Ahmad Shahid"
	};
	
	cout << "Enter where you want to index : ";
	cin >> tempIndex;
	if(tempIndex < 0 && tempIndex > 4 ){
		cout << "Wrong Input \n";
	}
	else{
	cout << "Enter a Name : ";
	cin >> tempValue;
	names[tempIndex] =tempValue;  
	cout << "Enter starting value : ";
	cin >> start;
	cout << "Enter ending value : ";
	cin >> end;
	if(start < 0 || start > 4 || end < 0 || end > 4 || end < start || start > end)
	{
	cout << "Wrong Starting or Ending Value \n";
	}
	else
	{
	for(int itterator = start ; itterator <= end ; itterator++)
	{
	cout << names[itterator] << endl;
	}
	cout << "Thanks for printing array  ";
	}
}
}
