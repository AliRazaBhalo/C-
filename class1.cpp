#include<iostream>

using namespace std;

int main(){
    char criminalRecod;
    cout << "Enter your criminal record y/n ";
    cin >> criminalRecod;
    if(criminalRecod = 'y'){
        cout << "Sorry";
    }
    else if(criminalRecod = 'n'){
        cout << "Congrats!";
    }
    else{
        cout << "Wrong Input";
    }
    return 0;
}