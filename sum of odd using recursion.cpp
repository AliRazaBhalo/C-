#include <iostream>
using namespace std;
int sumOfOdd(int i)
{
	int sum = 0;
	if (i % 2 != 0)
		{
			// cout << i << endl;
            sumOfOdd(i -2);
			sum = sum + i;
		}
		return sum;
}
	// for (int i = 1; i <= 100; i++){}
	int main()
	{
        int sum = sumOfOdd(10);
	cout << "Sum of first 100 odd numbers are = " <<sum  << endl;
	}
