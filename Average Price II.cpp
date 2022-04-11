#include<iostream>
using namespace std;
#define repeat(x) for(int rijk = (x); rijk > 0; --rijk)
int main()
{
	int n;
	cin >> n;
	int less_2 = 0; int less_4 = 0; int less_6 = 0;
	int house_2 = 0; int house_4 = 0; int house_6=0;
	repeat(n) {
		int p, b, f;
		cin >> p >> b >> f;
		if (b == 1 or b == 2) {
			less_2 += 1;
			house_2 += p;
		}
		else if (b == 3 or b == 4) {
			less_4 += 1;
			house_4 += p;
		}
		else if (b == 5 or b == 6) {
			less_6 += 1;
			house_6 += p;
		}
	}
	cout << house_2 / less_2 << endl;
	cout << house_4 / less_4 << endl;
	cout << house_6 / less_6 << endl;
}