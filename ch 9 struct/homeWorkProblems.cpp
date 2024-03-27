#include <iostream>
using namespace std;

typedef struct student
{
    string name;
    int roll;
    string department;
    int Class;
    int gpa;
    int fee;
    int isTeacherSon;
} stu;
void getData(string department, int roll)
{
    string name, Class int gpa, fee;
    // struct student department[roll];
    // department[roll]
    cout << "Enter student Name : ";
    cin >> name;
    // cin >> roll;
    cout << "Enter Class : ";
    cin >> Class;
    cout << "Enter GPA : ";
    cin >> gpa;
    cout << "Enter Fee : ";
    cin >> fee;
    //    student department[roll].name = name;
    //    student department[roll].department = department;
    //    student department[roll].roll = roll;
    //    student department[roll].Class = Class;
    //    student department[roll].gpa = gpa;
    //    student department[roll].fee = fee;
    cout << "The data of student is " << name << " " << Class << " , GPA = " << gpa << " Fee = " << fee;
}
int main()
{
    // prolem 1 Make a system that store the information of students, teachers and staff of your college in the form of the structure
    student cs[50], se[50], it[50], ai[50];
    int roll;
    string department;
    cout << "Enter Department of Student (cs,se,it,ai) : ";
    cin >> department;
    // department = "cs";
    if (department == "cs" || department == "se" || department == "it" || department == "ai")
    {
        cout << "Enter Roll # ";
        cin >> roll;

        if (roll <= 50)
        {
            getData(department, roll);
        }
    }
    else
    {
        cout << "Else Part";
    }
}
