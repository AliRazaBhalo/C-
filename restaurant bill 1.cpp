#include<iostream>
using namespace std;
int main(){
    int bill, paid, remaining;
    float discount;
    cout << "Please Enter Your bill : ";
    cin >> bill;
    cout << "How much you paid : ";
    cin >> paid;
    if(bill > 0 && bill <=300){
        discount = 5/100 * bill;
        
        cout << "Your bill is after discount " << discount;
    }

}
