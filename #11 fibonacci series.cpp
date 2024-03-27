#include<iostream>
using namespace std;
int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    int firstTerm = 0, secondTerm = 1, nextTerm;

    cout << "Fibonacci Series up to " << n << " terms : ";

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            nextTerm = i;
        } else {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }

        cout << nextTerm << " ";
    }

    cout << endl;

    return 0;
}

