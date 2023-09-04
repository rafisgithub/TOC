#include <iostream>
using namespace std;

// DFA Transition function
int isStartingWithA(string input);

int main() {
    string input;
    again:
    cout << "Enter a string: ";
    cin >> input;

    if (isStartingWithA(input)) {
        cout << "The input string starts with 'a'." << endl;
    } else {
        cout << "The input string does not start with 'a'." << endl;
    }
    goto again;

    return 0;
}

int isStartingWithA(string input){
    {
    int state = 0;  // Initial state
    for (char c : input) {
        if (state == 0 && c == 'a') {
            state = 1;  // Move to state 1 if 'a' is encountered
        } else if (state == 0 && c != 'a') {
            state = 2;  // Move to state 2 for any other character
        } else if (state == 1) {
            // Stay in state 1 if more 'a' characters are encountered
        } else if (state == 2) {
            // Stay in state 2 for any character after transitioning to it
        }
    }

    // If the final state is 1, the input string starts with 'a'
    return state == 1;
}
}