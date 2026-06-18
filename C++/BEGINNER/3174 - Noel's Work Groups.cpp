#include <iostream>
#include <string>
using namespace std;

int giftsPerDay(int N) {
    int H, Sb = 0, Sa = 0, Sm = 0, Sd = 0, P;
    string E, G;
    for (int i = 0; i < N; i++) {
        cin >> E >> G;
        cin >> H;
        if (G == "bonecos") {
            Sb = Sb + H;
        } 
        else if(G == "arquitetos") {
            Sa = Sa + H;
        }
        else if(G == "musicos") {
            Sm = Sm + H;
        }
        else if(G == "desenhistas") {
            Sd = Sd + H;
        }
    }
    Sb = Sb / 8;
    Sa = Sa / 4;
    Sm = Sm / 6;
    Sd = Sd / 12;
    P = Sb + Sa + Sm + Sd;
    return P;
}

int main() {
    int N;
    cin >> N;
    cout << giftsPerDay(N) << endl;

    return 0;
}

// Every year, Santa Claus recruits elves and gnomes for his Christmas preparation team. The sector of his production that changes the most during the year is the 
// manufacture of gifts, as he hires temporary elves, who work H hours of the day with him. Also, each elf is hired for one of the 4 different working groups, where 
// each group has some hours to produce gifts of the group type:

// Dolls group (in Portuguese, bonecos): 8 hours;
// Architects group (in Portuguese, arquitetos): 4 hours;
// Musicians group (in Portuguese, musicos): 6 hours;
// Drawners group (in Portuguese, desenhistas): 12 hours.
// Note that the elves in the dolls group only produce dolls, architects, houses, and so on. But each type of gift counts as a complete gift at the end of the day.

// Santa Claus has a list of the elves' names chosen this year, with the number of hours and in which group they can work. Knowing your programming skills, Noel wants 
// a little help from you to tell him how many gifts he will be able to have ready, per day, according to the number of elves he has hired and the availability of them.

// Input:
// The first input value is an integer N (1 ≤ N ≤ 1000), indicating the number of elves Santa has hired. The following N lines have three values E, G and H (1 ≤ H ≤ 24), 
// indicating respectively the name of the elf, which group he/she will work in (in lower case) and how many hours a day he will help (in full value).

// Output:
// The output should be an integer P , the total amount of gifts produced per day by Santa’s factory.

// .Input Sample:
// 7
// Aradhel bonecos 10
// Aerin arquitetos 15
// Anna musicos 10
// Elbereth musicos 10
// Freda desenhistas 15
// Arwen bonecos 10
// Logolas bonecos 10

// .Output Sample:
// 10