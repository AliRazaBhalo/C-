
#include<iostream>
using namespace std;
int main()
{
	int marks[] = {17,
	15,
	12,
	13,
	14,
	};
	string subject[] = {
	"Programming Fundamentalls",
	"English",
	"ICT",
	"Discrete Structures",
	"Calculus",
	};
	cout << "Welcome to know about My Mid term Marks :- \n";
	for(int i = 0 ; i <= 4 ; i++){
		cout << subject[i]  << " " <<  marks[i] << endl;
	}
	
}
