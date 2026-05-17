#include <iostream>
#include <iomanip>
using namespace std;

double GDP(double F1, double F2) {
    return (((1 + F1 / 100.0) * (1 + F2 / 100.0)) - 1) * 100.0;
}

int main() {
    double num1, num2;
    cin >> num1 >> num2;
    cout << fixed << setprecision(6) << GDP(num1, num2) << endl;

    return 0;
}

// The South is one of the regions which contribute the most to the Gross Domestic Product (GDP) in Brazil. 
// However, due to the pandemic of COVID-19, the economy in the three states of the South has been much affected. 
// Alice, a researcher of the University of the South, collected data on the GDP fluctuation in the whole South in each of the two last years. 
// Each GDP fluctuation is represented by a percentage, in a manner that a positive percentage indicates growth in the corresponding period of one year, whilst a negative percentage indicates decrease.

// Bob, a politician, is going to give an interview to the press tomorrow. Based on the two values collected by Alice, Bob wants to calculate the GDP 
// fluctuation corresponding to the whole analysed period of two years, so he doesn't talk nonsense in the interview.

// .Input:
// The input consists of two values F1 and F2 (-100.00 ≤ F1, F2 ≤ 100.00), which correspond to the GDP fluctuations in the first and in the second years analysed by Alice, respectively. 
// The values are given with exactly two digits after the decimal point.

// .Output:
// Print a value, with exactly six digits after the decimal point, that corresponds to the GDP fluctuation in the whole analysed period of two years.

// Input Samples:
// -4.00 5.00

// 66.66 88.88

// Output Samples:
// 0.800000

// 214.787408