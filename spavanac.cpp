#include<iostream>
using namespace std;
int main()
{
	int h, m;
	int alarm= 45;
	cin >> h >> m;
	if (m < alarm and h>0)
	{
		m += 60 - alarm;
		h -= 1;
	}
	else if (m < alarm and h <= 0)
	{
		h += 23;
		m += 60 - alarm;
	}
	else
	{
		m -= alarm;
	}
	cout << h << " " << m << endl;
	return 0;
} 