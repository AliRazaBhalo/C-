#include <iostream>
using namespace std;
struct student
{
    string name;
    int roll;
    float gpa;
    void work(string name)
    {
        cout << name << " can study Hard if he wish\n";
    }
};

void printDetails(string name, int roll, float gpa)
{
    cout << "Student Name is " << name << endl;
    cout << "Student Roll is " << roll << endl;
    cout << "Student gpa is " << gpa << endl << endl;
}
int main()
{
    struct student ali, umar, shahzad; // User defined variables

    umar.name = "Umar";
    umar.roll = 4218;
    umar.gpa = 3.99;
    // umar.work("Umar");
    printDetails(umar.name, umar.roll, umar.gpa);
    

        shahzad.name = "Shahzad";
    shahzad.roll = 4217;
    shahzad.gpa = 3.96;
    // shahzad.work("Shahzad");
    printDetails(shahzad.name, shahzad.roll, shahzad.gpa);

        ali.name = "Ali";
    ali.roll = 4216;
    ali.gpa = 3.56;
    // ali.work("Ali");
    printDetails(ali.name, ali.roll, ali.gpa);
}