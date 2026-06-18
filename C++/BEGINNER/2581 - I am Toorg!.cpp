#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string question;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++) {
        getline(cin, question);
        cout << "I am Toorg!" << endl;
    }

    return 0;
}

// Toorg is the wisest member of the group of heroes called The Protectors of the Milky Way. For any question, it has the ideal answer! Write a program that, given a 
// question, tells Toorg's answer.

// Input:
// The input will have several test cases. For each test case, a N number is displayed, which represents the number of test cases. Then there will be N lines, with 
// questions asked for Toorg.

// Output:
// For each test case, print Toorg's answer.

// .Input Sample:
// 3
// Who are you?
// How old are you?
// What can I do for you?

// .Output Sample:
// I am Toorg!
// I am Toorg!
// I am Toorg!