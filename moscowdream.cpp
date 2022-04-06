#include<iostream>
using namespace std;
int main()
{
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	if ((a > 0 and b >0 and c >0) && (a+b+c>=n) && n>=3)
	{
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}