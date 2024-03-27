#include <iostream>
using namespace std;
int main() 
{
    int array[10000];
    int a,e;
    cout<<"\t\t..Its My Program in find a table using array and limit to end table Number.."<<endl;
    cout<<"Enter table No: ";
    cin>>a;
    cout<<"Enter table End Number: ";
    cin>>e;
    for (int c = 1; c <= e; c++) {
        array[c] = a*c;
    }
    cout << "The table is:" << endl;
    for (int f = 1; f <= e; f++) {
        cout <<a <<"*"<<f <<"= "<< array[f] <<endl;
    } 
    return 0;
}

