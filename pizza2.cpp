#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int r, c;
	cin >> r >> c;
	cout.precision(6);
	cout << fixed << 100*(pow((r-c),2))/pow(r,2) << endl;

	return 0;
}