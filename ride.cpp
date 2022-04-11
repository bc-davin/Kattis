/*
ID: davice1
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int encode(string word)
{
    int i, res = 1;
    for (i = 0; i < word.length(); i++) {
        res = res* int(word[i] - 64);
    }
    return res % 47;
}

int main() {
    ofstream fout("ride.out");
    ifstream fin("ride.in");
    string comet, group;
    fin >> comet>> group;
    comet = encode(comet);
    group = encode(group);

    if (comet==group){
        fout << "GO" << endl;
    }
    else {
        fout << "STAY" << endl;
    }

    return 0;
}