#include<iostream>
using namespace std;
int main() 
{
    int n;
    int sum = 0;
    cout << "Enter a positive integer: " <<endl;
    cin >> n;
        	for (int i = 1; i <= n; i++) 
			{
            	sum = sum+i;
        	}
        	cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
