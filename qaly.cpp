#include <iostream>
#include<iomanip>
using namespace std;

int main()
{

int n;
cin>> n;
double qualityLife=0;
for(int i=0; i<n;i++)
{
	double quality,year; 
	cin>> quality>> year;
	qualityLife+=quality*year;
}
cout<<fixed<<showpoint; 
cout<<setprecision(3);
cout<<qualityLife<<endl;

return 0;
}