#include<iostream>
using namespace std;
struct employe
{
    int id;
    int salary;
    int grade;
    string dep;
};

int main(){
    struct employe e1 = {1,12000,13,"IT"};
    struct employe *ptr = &e1;
    cout << (*ptr).salary; // (*pointer) must be in paranthesis
}