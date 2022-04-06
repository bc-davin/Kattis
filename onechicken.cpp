#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (b > a and b-a>1) {
		cout << "Dr. Chaz will have " << b - a << " pieces of chicken left over!" << endl;
	}
	else if (b > a and b - a == 1)
	{
		cout << "Dr. Chaz will have " << b - a << " piece of chicken left over!" << endl;
	}
	else if (a > b and a - b == 1)
	{
		cout << "Dr. Chaz needs " << a - b << " more piece of chicken!" << endl;
	}
	else {
		cout << "Dr. Chaz needs " << a - b << " more pieces of chicken!" << endl;
	}

	return 0;
}