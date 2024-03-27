#include<iostream>
using namespace std;
int main(){
	char print;
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
	jump1:
	cout << "Do you want to print the Array(y/n) : ";
	cin >> print;
	if(print == 'y')
	{
		jump:
		cout << "Enter Array's Starting value : ";
		cin >> start;
		cout << "Enter Array's Ending value : ";
		cin >> end;
		
		if(start < 0 || start > 4 || end < 0 || end > 4)
		{
			cout << "Wrong Starting or Ending Value \n  Please Try Again \n";
			goto jump;
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
	else if(print == 'n')
	{
		cout << "Thank you ";
	}
	else
	{
		cout << "Wrong input Please try again \n";	
		goto jump1;
	}
	
	}

	
	
	
}
