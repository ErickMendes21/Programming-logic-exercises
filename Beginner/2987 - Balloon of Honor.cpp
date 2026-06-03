#include <iostream>
using namespace std;

int main() {
    char L;
    int result;
    cin >> L;
    result = (L - 'A' + 1);
    cout << result << endl;

    return 0;
}

// Given a letter of the alphabet, state its position.

// Input:
// A single character L, an uppercase letter ('A' - 'Z') of the alphabet.

// Output:
// A single integer, which represents the position of the letter in the alphabet.

// .Input Sample:
// c

// .Output Sample:
// 3