#include<iostream>
using namespace std;
#define repeat(x) for(int rijk = (x); rijk > 0; --rijk)
int main()
{
    int n;
    int total = 0;
    int house_num = 0;
    cin >> n;
    repeat(n) {
        int p, b, f;
        cin >> p >> b >> f;
        if (b <= 3 || f <= 4000)
        {
            total += p;
            house_num += 1;
        }
    }
    cout << total / house_num << endl;
    return 0;
}