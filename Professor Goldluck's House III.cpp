#include<iostream>
using namespace std;
#define repeat(x) for(int rijk = (x); rijk > 0; --rijk)
int main()
{
	int n;
	cin >> n;
	int low_ppsf = 0;
	int p1 = 0, b1 = 0, f1 = 0, ppsf1 = 0;
	int p2 = 0, b2 = 0, f2 = 0, ppsf2 = 0;
	int p3 = 0, b3 = 0, f3 = 0, ppsf3 = 0;
	repeat(n) {
		int p, b, f;
		cin >> p >> b >> f;
		if (p >= 2500) {
			if (p / f > ppsf1) {
				low_ppsf = ppsf1;
			}
			if (p/f>low_ppsf)
		}


	}
}