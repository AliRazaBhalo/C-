#include <iostream>
using namespace std;
int main()
{
    int n;
    bool Prime=true; 
    cout<<"Enter a number "<<endl;
    cin>>n;
    if(n<=1)
	{
        Prime=false;
    }
	 else
	{
        for(int i=2;i*i<=n;i++)
		{
            if(n%i==0)
			{
                Prime=false;
                break;
            }
        }
    }
    if (Prime) {
        cout << n<< " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}