#include <iostream>
using namespace std;
void reverseSentence() {
    char ch;
    cin.get(ch);  

    if (ch != '\n') {
        reverseSentence();
		cout << ch;
    }
}

int main() {
    cout << "Enter a sentence: ";
    reverseSentence();
    cout << endl;
    
    return 0;
}

