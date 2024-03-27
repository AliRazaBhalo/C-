
#include <iostream>
using namespace std;
int main()
{
    int bill, paid, remaining;
    float discount;
    cout << "Please Enter Your bill : ";
    cin >> bill;
//    cout << "How much you paid : ";
//    cin >> paid;
    cout << "Actual bill is : " << bill <<endl;
    if (bill < 300)
    {
        discount = 5;
        cout << "Your discount rate is " << discount <<endl;
    	
		cout << "Your bill after discount  : " << discount <<endl;
        remaining = bill - discount;
        cout << "Bill after discount " << discount <<endl;
       
    }
     cout << "Customer paid : ";
        cin >> paid;
            cout << "Your bill ";
        cout << "Cash return is : " << paid - remaining <<endl;
    	cout << "Thanks for visiting ABC Restaurant ";
}
