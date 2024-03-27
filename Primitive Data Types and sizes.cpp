#include<iostream>
using namespace std;
int main()
{
	int number; // 4 byte
	float decimal; // 4 byte
	char letter; // 1 byte
	bool table; // 1 byte
	double second; // 8 byte
	cout << "The size of number is " << sizeof(number) << endl;
	cout << "The size of decimal is " << sizeof(decimal) << endl;
	cout << "The size of character is " << sizeof(letter) << endl;
	cout << "The size of Boolean is " << sizeof(bool) << endl;
	cout << "The size of double is " << sizeof(double) << endl;
	
		// Double, Short, Signed and Unsigned Data Types 
		// Syntax of it
		
//	Sizes of short and long integar types
	short int si;
	long int li;
	signed int sin;
	unsigned int usin;
	
	cout << "size of short int " << sizeof(si) << endl; //2 bit 
	cout << "size of long int " << sizeof(si) << endl; // 4bit
	cout << "size of signed int " << sizeof(sin) << endl; // 4bit
	cout << "size of unsigned int " << sizeof(usin) << endl; // 4bit
}
