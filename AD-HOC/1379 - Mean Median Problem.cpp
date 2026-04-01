#include <iostream>
using namespace std;

int main() {
    int A, B, C, count = 0;
    cin >> A >> B;
    while (A != 0 && B != 0) {
        for (int i = A; i < B; i++) {
            count++;
        }
        if (count >= A) {
            C = A - count;
        } else {
            C = A - count;
        }
        cout << C << endl;
        cin >> A >> B;
        count = 0;
    }
    
    
   return 0;
}

// The mean of three integers A, B and C is (A + B + C)/3. The median of three integers is the one that would be in the middle if they are sorted in non-decreasing order. 
// Given two integers A and B, return the minimum possible integer C such that the mean and the median of A, B and C are equal.

// .Input:
// Each test case is given in a single line that contains two integers A and B (1 ≤ A ≤ B ≤ 109). The last test case is followed by a line containing two zeros.

// .Output:
// For each test case output one line containing the minimum possible integer C such that the mean and the median of A, B and C are equal.

// Sample Input:
// 1 2
// 6 10
// 1 1000000000
// 0 0

// Sample Output:
// 0
// 2
// -999999998