#include <iostream>

double squareRoot(double n) {
    // Initial guess
    double x = n;

    // Relative error tolerance
    double epsilon = 0.000001;

    // Loop until the difference between consecutive guesses is within the tolerance
    while ((x * x - n) > epsilon) {
        // Newton-Raphson formula
        x = (x + n / x) / 2.0;
    }

    return x;
}

int main() {
    // Example usage
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Square root is not defined for negative numbers." << std::endl;
    } else {
        double result = squareRoot(number);
        std::cout << "Square root of " << number << " is approximately: " << result << std::endl;
    }

    return 0;
}

