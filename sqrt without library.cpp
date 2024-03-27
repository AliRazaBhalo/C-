#include<iostream>
using namespace std;
int main(){
    int number, number2;
    float i;
    cout << "Enter A number to get its square root : ";
    cin >> number;
//    cin >> number2;
    for (i = 0.01; i * i < number; i = i + 0.01)
    {
//       cout << i << endl;
    }
//    for(i = 0.00001; i<number2 ; i = i + 0.00001);
    cout << "Square root of " << number << " is " << i;
    cout << "\n		 Thankyou ";
    
}
