#include <iostream>
using namespace std;
int sum_n(int number)
{
{
int natural_n = 0 ;
for (int i = 1; i <= number; i++) {
natural_n += i;
}
cout << "The Sum of " << number << " is: " << natural_n << endl;
}
return number;
}
int main() 
{
int number;
cout << "Enter a number: ";
cin >> number;
sum_n(number);
return 0;
}