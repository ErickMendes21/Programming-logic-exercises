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