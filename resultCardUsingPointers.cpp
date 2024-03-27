#include<iostream>
using namespace std;
int main(){
    int tm,om;
    int *ptr1 = &om;
    int *ptr2 = &tm;
    cout << "Enter Obtained Marks : ";
    cin >> *ptr1;
    cout << "Enter Total Marks ";
    cin >> *ptr2;
    cout << "Result is " << *ptr1 << "/" << *ptr2;

}