#include <iostream>
#include <algorithm>
using namespace std;

int age(int monicaAge, int secondSonAge, int thirdSonAge) {
    int C = monicaAge - secondSonAge - thirdSonAge;
    return max(C, max(secondSonAge, thirdSonAge));
}

int main() {
    int M, A, B;
    cin >> M >> A >> B;
    cout << age(M, A, B) << endl;

    return 0;
}

// Mrs. Monica is the mother of three children of different ages. She noticed that, this year, 
// the sum of her three children’s ages equals her own age. In this problem, given Mrs. 
// Monica’s age and the ages of two of her children, your program must compute and print the age of the 
// oldest child. For example, if we know that Mrs. Monica is 52 years old and the known ages of two of the 
// children are 14 and 18 years, then the age of the other child, which was unknown, must be 20 years, 
// since the sum of the three ages must equal 52. Therefore, the age of the oldest child is 20. 
// In another example, if Mrs. Monica is 47 years old and the ages of two of the children are 21 and 9 years, 
// then the other child must be 17 years old, and therefore, the age of the oldest child is 21.

// .Input:
// The first line of the input contains an integer M representing Mrs. Monica’s age. 
// The second line of the input contains an integer A representing the age of one of the children. 
// The third line of the input contains an integer B representing the age of another child.

// .Output:
// Your program must print a single line containing an integer representing the age of Mrs. 
// Monica’s oldest child.

// Constraints

// • 40 ≤ M ≤ 110

// • 1 ≤ A < M

// • 1 ≤ B < M

// • A ≠ B

// Example Input:
// 52
// 14
// 18

// 47
// 21
// 9

// Example Output:
// 20

// 21