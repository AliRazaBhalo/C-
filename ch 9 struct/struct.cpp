#include<iostream>
using namespace std;
struct student
{
    string name;
    int roll;
    float gpa;
};

void printDetails(string name, int roll, float gpa){
    cout << "Student Name is " << name << endl;
    cout << "Student Roll is " << roll << endl;
    cout << "Student gpa is " << gpa << endl;
}
/*void addDetails(string name, int roll, float gpa, string stName){
    stName.name = name;
    stName.roll = roll;
    stName.gpa = gpa;
}*/
int main(){
    struct student ali;
    struct student umar;
    struct student shahzad;

    ali.name = "Ali";
    ali.roll = 4219;
    ali.gpa = 3.9;
    
}