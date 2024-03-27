#include<iostream>
using namespace std;
int main(){
    int first,second,next;
    int n;
    cout << "Enter first term";
    cin >> first;
    cout << "Enter Second Term : ";
    cin >> second;
    cout << "Enter Number of terms : ";
    cin >> n;
    cout << first << "\t";
    cout << second << "\t";
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            return i;
        }
        else{
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << "\t";
        
        
    }
    
    cout << next;
}