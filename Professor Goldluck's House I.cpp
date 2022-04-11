#include <iostream>
using namespace std;

#define repeat(x) for(int rijk = (x); rijk > 0; --rijk)

#define MAX_PPSF  1000000

int main() {
    int  n;
    cin >> n;

    int p1 = 0, b1 = 0, f1 = 0, ppsf1 = MAX_PPSF;  // stores information of current best house

    int p2 = 0, b2 = 0, f2 = 0, ppsf2 = MAX_PPSF;  // stores information of current second best house

    repeat(n) {
        int p, b, f;
        cin >> p >> b >> f;

        if (b >= 4 && f >= 2500 && p <= 400000) {  // current house satisfies all conditions

            int ppsf = p / f;
            if (ppsf < ppsf1) {
                // since we found a house with new lowest ppsf, 
                // set second best house to copy info of current best
                ppsf2 = ppsf1;  p2 = p1;  f2 = f1;  b2 = b1;

                // set current best to be the current house
                ppsf1 = ppsf;   p1 = p;   f1 = f;   b1 = b;
            }
            else if (ppsf < ppsf2) {
                // Current house is no better than current best, but better than second best
                // set second best to current house
                ppsf2 = ppsf;   p2 = p;   f2 = f;   b2 = b;
            }
        }
    }

    if (ppsf1 == MAX_PPSF)          // no house info stored
        cout << "You are out of luck, Prof. Goldluck.\n";   // we can use a single statement here
    else if (ppsf2 == MAX_PPSF) {   // only one house information stored
        cout << p1 << " " << b1 << " " << f1 << endl;       // here we use curly brackets
    }
    else {                        // stored information for two houses
        cout << p1 << " " << b1 << " " << f1 << endl;       // with two statements, we have to use
        cout << p2 << " " << b2 << " " << f2 << endl;       // curly brackets to create a compound statement
    }
    return 0;
}