#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	// the difference of the areas of two circles with radius R, 
	// one of which is in normal (Euclidian) geometry
	// , and the other in taxicab geometry
	double r;
	cin >> r;
	cout.precision(8);
	cout <<fixed<< M_PI *pow(r,2) << endl;
	cout << fixed<<pow(r,2)*2<<endl;

	return 0;

}