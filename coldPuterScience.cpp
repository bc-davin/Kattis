#include <iostream>
using namespace std;
int main()
{

// var
int numberReports, weather;
cin>> numberReports;
int belowZeroCount=0;

for (int num=0; num<numberReports;num++)
{
	cin>>weather;
	if (weather<0)
	{
		belowZeroCount++;
	
	}
}

cout<<belowZeroCount<<endl;

}