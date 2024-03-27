#include <iostream>
using namespace std;
struct student
{
    string name;
    int roll;
    float cgpa;
    char grade;
};
void printDetails(string name, int roll, float cgpa, char grade)
{
    cout << " Student Name is : " << name << endl;
    cout << " Student roll is : " << roll << endl;
    cout << " Student cgpa is : " << cgpa << endl;
    cout << "Student grade is : " << grade << endl;
}
void print(string name)
{
    cout << "Name is " << name;
}

int main()
{
    struct student BSCS23[20];
    BSCS23[0] = {"Ali Raza", 4219, 3.9, 'A'}; // Things should be in the same format in which it is declared in our struct
    printDetails(BSCS23[0].name, BSCS23[0].roll, BSCS23[0].cgpa, BSCS23[0].grade);
    cout << BSCS23[0].roll;
    // print("ali");
}