#include<iostream>
using namespace std;
// Function to add two time objects
void addTime(int h1, int m1, int s1, int h2, int m2, int s2, int &resultHours, int &resultMinutes, int &resultSeconds) {
    resultSeconds = s1 + s2;
    resultMinutes = m1 + m2 + resultSeconds / 60;
    resultHours = h1 + h2 + resultMinutes / 60;

    resultSeconds %= 60;
    resultMinutes %= 60;
}

int main() {
    int hours1, minutes1, seconds1;
    int hours2, minutes2, seconds2;
    int resultHours, resultMinutes, resultSeconds;

    // Input for Time 1
     cout << "Enter hours for Time 1: ";
     cin >> hours1;

     cout << "Enter minutes for Time 1: ";
     cin >> minutes1;

     cout << "Enter seconds for Time 1: ";
     cin >> seconds1;

    // Input for Time 2
     cout << "Enter hours for Time 2: ";
     cin >> hours2;

     cout << "Enter minutes for Time 2: ";
     cin >> minutes2;

     cout << "Enter seconds for Time 2: ";
     cin >> seconds2;

    // Add the two time objects
    addTime(hours1, minutes1, seconds1, hours2, minutes2, seconds2, resultHours, resultMinutes, resultSeconds);

    // Display the result
     cout << "\nResult:\n";
     cout << "Time: " << resultHours << " hours, " << resultMinutes << " minutes, " << resultSeconds << " seconds" <<  endl;

    return 0;
}
