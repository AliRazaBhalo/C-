#include <iostream>
using namespace std;
int main()
{
    float marksPercentage;
    char grade;
    float obtained, total;
    cout << "Enter Your obtained Marks : ";
    cin >> obtained;
    cout << "Enter Total Marks : ";
    cin >> total;
    marksPercentage = (obtained / total) * 100;

    if (marksPercentage >= 90)
    {
        grade = 'A';
    }
    else if (marksPercentage >= 80 && marksPercentage < 90)
    {
        grade = 'B';
    }
    else if (marksPercentage >= 70 && marksPercentage < 80)
    {
        grade = 'C';
    }
    else if (marksPercentage >= 60 && marksPercentage < 70)
    {
        grade = 'D';
    }
    else if (marksPercentage >= 50 && marksPercentage < 60)
    {
        grade = 'E';
    }
  
    else
    {
        grade = 'F';
    }
    cout << "You Got Grade  " << grade;

        return 0;
    }
