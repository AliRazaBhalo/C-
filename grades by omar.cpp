#include<iostream>
using namespace std;
int main()
{
	int tm, om;
	float pc;
 char grade;
 
 cout<<"Enter the total marks: "<<endl;
 cin>>tm;
 cout<<"Enter the obtained marks:"<<endl;
 cin>>om;
 pc= (om/tm)*100;
 cout<<"This is the percentage marks:"<<pc<<endl;
 if ( om>=0 or om<= 1100)
 {
 	cout<<"you entered wrong numbers:"<<endl;
 	
 }
 else 
 {
 	switch( om/100)
 	{
 		
 		case 10:
 		case 9:
 			grade = 'a';
			 cout<<"you got A grade! congratulations you are a topper "<<endl;
 		case 8: 
		 	grade = 'b';
			 cout << "You got B grade ";
	 	case 7:
		 	grade = 'b';
			 cout << "You got dsc grade ";
	 }
 }
 
}
