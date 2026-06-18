#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string CPF;
    cin >> CPF;
    CPF.erase(remove(CPF.begin(), CPF.end(), '.'), CPF.end());
    CPF.erase(remove(CPF.begin(), CPF.end(), '-'), CPF.end());

    for (int i = 0; i < CPF.size(); i++) {
        cout << CPF[i];
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
        if (i == CPF.size() - 1) {
            cout << endl;
        }
    }

    return 0;
}

// Your teacher would like to make a program with the following characteristics:

// Read the data of a CPF in the format XXX.YYY.ZZZ-DD;
// Print the four numbers, one value per line.

// Input:
// The entry consists of several test files. In each test file there is one line. The line has the following format XXX.YYY.ZZZ-DD, where XXX, YYY, ZZZ, 
// DD are integers. As shown in the following input example.

// Output:
// For each file in the entry, you have an output file. The output file has four rows with an integer in each of them as it has been entered. As shown in 
// the following output example.

// .Input Samples:
// 000.000.000-00

// 320.025.102-01

// .Output Samples:
// 000
// 000
// 000
// 00

// 320
// 025
// 102
// 01