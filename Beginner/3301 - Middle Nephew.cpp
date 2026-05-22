#include <iostream>
#include <string>
using namespace std;

void middleNephew(int H, int Z, int L) {
    int r = (H + Z + L) / 3;
    if (r == H) {
        cout << "huguinho" << endl;
    }
    if (r == Z) {
        cout << "zezinho" << endl;
    }
    if (r == L) {
        cout << "luisinho" << endl;
    }
}
 
int main() {
    int H, Z, L;
    cin >> H >> Z >> L;
    middleNephew(H, Z, L);
 
    return 0;
}

// Uncle Patinhas was a millionaire who lived in his mansion, and he had three nephews: Huguinho, Zezinho and Luisinho. 
// He was easily confused between the three nephews because they were very similar, despite their different ages. 
// One day, the three made a bet with their uncle: if he guessed who the middle nephew was, that is, neither the youngest nor the oldest, they would give him a gold coin, 
// and if he missed, he would have to give each one a gold coin. So the uncle asks for your help so he can win this bet

// Input:
// Input consists of several test cases. Each case contains three integer values H, Z and L, which represent the ages of Huguinho, Zezinho and Luisinho, respectively.

// Output:
// For each test case print the name of the middle nephew in lowercase.

// .Input Samples:
// 5 6 7

// 7 5 6

// 6 7 5

// .Output Samples:
// zezinho

// luisinho

// huguinho