#include<iostream>
using namespace std;

int main()
{
    string arry[5]  = {"Fahad" , "Umer" , "Mansoor", "Noman" , "Ali Raza"};
    string *ptr = arry;
    cout << "Accessing Elements : "<<endl;
    for ( int ary=0; ary < 5; ary++)
    {
    cout  << *(ptr+ary) << endl;
    }
    return 0;
}