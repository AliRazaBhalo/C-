#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	for(int i = 0 ; i <= 10 ; i = i + 2 ){
	cout << i << endl; 
	 sum =  sum + i;
		
	}
	cout << "Sum of first 10 odd numbers are = " << sum <<endl;
}
