#include <iostream>
using namespace std;

void numberBalls(int b, int g) {
    int balls = g / 2;
    int rest = balls - b;
    if (rest <= 0) {
        cout << "Amelia tem todas bolinhas!" << endl;
    } else {
        cout << "Faltam " << rest << " bolinha(s)" << endl;
    }
}

int main() {
    int B, G;
    cin >> B;
    cin >> G;
    numberBalls(B, G);

    return 0;
}

// Amelia loves Christmas, and her favorite part on this date is setting up the Christmas tree! 
// She loves to decorate the tree with polka dots and colorful lights, so it looks bright and fun! However, 
// Amélia likes things well distributed and demands that her tree has no more than half of branches in balls. 
// So, if your Christmas tree has G branches, it needs G / 2 marbles. If the G number of branches is odd, that value will be rounded down.

// This year, Amélia decided to update her tree and will buy a new one. Also, some of her balls broke, 
// and she will need to know how many new balls she will need to buy to keep her tree balanced the way she likes it!

// For that, she wants your help! Given the number of balls Amelia has and the number of branches her new tree will have, 
// tell Amelia how many Christmas balls she needs to buy to decorate her new tree!

// .Input:
// The input consists of two integer values, read on two lines, B (1 < B < 103) and G (100 < G < 1000) indicating, respectively, 
// the number of balls that Amélia already has and the number of branches of her new Christmas tree.

// .Output:
// Print the number of balls Amélia needs to buy to complete her tree, with the message "Faltam B bolinha(s)" (in English, Missing B ball(s)), 
// where B is the number of balls that Amelia needs to buy. If Amelia has enough balls to spare, print the message "Amelia tem todas bolinhas!" (in English, "Amelia has all balls!")

// Input Samples:
// 300
// 700

// 300
// 600

// 300
// 701

// Output Samples:
// Faltam 50 bolinha(s)

// Amelia tem todas bolinhas!

// Faltam 50 bolinha(s)