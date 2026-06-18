#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, even = 0, odd = 0, countEven = 0, countOdd = 0;
    cin >> N;
    int* num = new int[N];
    
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    
    for (int i = 0; i < N; i++) {
        if (num[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    int* vecEven = new int[even];
    int* vecOdd = new int[odd];

    for (int i = 0; i < N; i++) {
        if (num[i] % 2 == 0) {
            vecEven[countEven] = num[i];
            countEven++;
        } else {
            vecOdd[countOdd] = num[i];
            countOdd++;
        }
    }

    sort(vecEven, vecEven + even);
    sort(vecOdd, vecOdd + odd); 

    for (int i = 0; i < even; i++) {
        cout << vecEven[i] << "\n";
    }

    for (int i = odd - 1; i >= 0; i--) {
        cout << vecOdd[i] << "\n";
    }

    delete[] num;
    delete[] vecEven;
    delete[] vecOdd;
    
   return 0;
}

// Considering the input of non-negative integer values​​, sort these numbers ​​according to the following criteria: First the even in ascending order followed by the odd in descending order.

// .Input:
// The first line of input contains a positive integer number N (1 < N <= 105). This is the number of following input lines. The next N lines contain, each one, a integer non-negative number.

// .Output:
// Print all numbers according to the explanation presented above. Each number must be printed in one line as shown below.

// Sample Input:
// 10
// 4
// 32
// 34
// 543
// 3456
// 654
// 567
// 87
// 6789
// 98

// Sample Output:
// 4
// 32
// 34
// 98
// 654
// 3456
// 6789
// 567
// 543
// 87