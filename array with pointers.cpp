#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    cout << *(arr+2) << "\t" << *(arr + 5); // arr+5 is not a part of our array
    // By default array exist on 0th term
}