#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a == 0 and b == 0) {
		cout << "Not a moose" << endl;
	}
	else if  (a == b && a>0)
	{   
		cout << "Even "<<2*a << endl;
	}
	else {
		cout << "Odd " << 2 * max(a, b) << endl;
	}
	return 0;
}