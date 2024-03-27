#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  /*
    int sec;
    cout << "Enter time in seconds: ";
    cin >> sec;
    int hour = sec / 3600;
    sec = sec% 3600;
    int min = sec / 60;
    sec = sec % 60;
    cout << "Time in HH:MM:SS is " << hour << ":" << min << ":" << sec;
//  you are such a cute girl 
    int n = 512;
    int a = n/100;
    n%=100;
    int b = n / 10;
    n %= 10;
    cout << "The reversed number is " << a << b<< n;
  */
    int n = 2;
    double m = 3.0;
    cout << setprecision(2);
    cout << n*m  << "And" << n/m;
    }