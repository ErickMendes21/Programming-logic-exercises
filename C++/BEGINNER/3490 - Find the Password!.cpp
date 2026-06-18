#include <iostream>
using namespace std;

int main() {
    int numbers[4];
    while (cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3]) {
        for (int i = 0; i < 4; i++) {
            cout << numbers[i];
        }
        cout << endl;
    }

    return 0;
}

// Description of the Problem


// To promote integration among new students at an Institute of Technology, a challenge was proposed: in an open field, 4 papers were scattered. Each paper had a letter and a number on it. The letter corresponded to the order of digits that formed the password for a lock, which secured a box full of prizes. In other words, the paper with the letter A had the first digit of the password, the one with the letter B had the second, and so on. Now they count on you to develop a code that solves this problem more quickly.



// .Input:


// The input consists of several test cases. Each case contains four integer values A, B, C and D (0 ≤ N ≤ 9), representing the digits of the password in the correct order.



// .Output:


// For each test case, print the assembled password correctly.

// Samples Input:
// 1 2 3 4
// 0 0 0 0

// Samples Output:
// 1234
// 0000