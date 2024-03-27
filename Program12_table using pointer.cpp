#include<iostream>
using namespace std;
int main()
{
	int sval,eval,tble;
	cout<<"Enter Table : ";
	cin>>tble;
	cout<<"Enter starting value : ";
	cin>>sval;
	cout<<"Enter ending value   : ";
	cin>>eval;
	for(int i = sval; i <= eval; i++)
	{
        int result = tble * i;
        int *ptr_result = &result;
		cout << tble << " * " << i << " = " << *ptr_result << endl;
    }
	return 0;
}
