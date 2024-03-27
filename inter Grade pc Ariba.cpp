#include<iostream>
using namespace std;

int main()
{
int marks,total_marks,pc;
cout<<"total marks =";
cin>>total_marks;
cout<<"your marks =";
cin>>marks;
//cout<<"parcentage";
//cin>>pc;
if(marks<0 || marks>1100)	
{
cout<<"wrong marks enterd";	
	}	
else	
	{
	switch(marks/100)
	{
	case 10:
	case 9:
	cout<<"grade is A";
	break;
	case 8:
	cout<<"grade is B";
	break;
	case 7:
	cout<<"grade is C";
	break;
	case 6:
	cout<<"grade is D";
	break;
	case 5:
	cout<<"grade is E";
	break;
	default:
	cout<<"grade is F";
	break;
}
}
return 0;
}
