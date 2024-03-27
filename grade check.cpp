#include<iostream>
using namespace std;
int main()
{
	int om,tm,c;
	cout<<"Obtain Marks = ";
	cin>>om;
	cout<<"Enter Total Marks = ";
	cin>>tm;
	c=(om*100)/tm;
	cout<<"Percentage Is = "<<c<<endl;
	if(c>=90)
	cout<<"GRADE = A+";
	else if(c>=87 && c<90)	
	cout<<"GRADE = A";
	else if(c>=82 && c<87)	
	cout<<"GRADE = B+";
	else if(c>=77 && c<82)	
	cout<<"GRADE = B";
	else if(c>=70 && c<77)	
	cout<<"GRADE = C+";
	else if(c>=60 && c<70)	
	cout<<"GRADE = C";
	else if(c>=50 && c<60)	
	cout<<"GRADE = D+";
	else if(c>=40 && c<50)	
	cout<<"GRADE = D";
	else if(c>=33 && c<40)	
	cout<<"GRADE = E";
	else 	
	cout<<"GRADE = F";
	return 0;
	
}



