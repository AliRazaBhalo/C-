#include<iostream>
using namespace std;

// Can we print the name of employe in oops setid / getid;
// Can we send and receive the name by using variables;

class Employe {
    int id;
    int salary;
    public: 
    void setId(string name){
        cout << "Enter " << name << " id ";
        cin >> id;
    }
    void getId(string name){
        cout <<"The id of "<< name << "  is " << id;
    }
};


int main(){
    Employe ali, umar, shahzad, muazam;
    ali.setId("ali");
    ali.getId("ali");
}