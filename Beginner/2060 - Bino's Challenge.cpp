#include <iostream>
using namespace std;

int main() {
    int N, mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            mult2++;
        }
        if (arr[i] % 3 == 0) {
            mult3++;
        }
        if (arr[i] % 4 == 0) {
            mult4++;
        }
        if (arr[i] % 5 == 0) {
            mult5++;
        }
    }

    cout << mult2 << " Multiplo(s) de 2" << endl;
    cout << mult3 << " Multiplo(s) de 3" << endl;
    cout << mult4 << " Multiplo(s) de 4" << endl;
    cout << mult5 << " Multiplo(s) de 5" << endl;
    
   return 0;
}