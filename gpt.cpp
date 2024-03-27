#include <iostream>
using namespace std;
int main() {
    // Declare variables to store the two numbers
    double num1, num2;
    // datatype identifier; variable declaration
    // identifier = value; // variable initialization
    // Ask the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Ask the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Add the two numbers
    double sum = num1 + num2;

    // Display the result
    cout << "Sum: " << sum << endl;

    return 0;
}
