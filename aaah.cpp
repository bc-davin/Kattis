#include<iostream>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int counts1 = 0;
	int counts2 = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == 'a')
		{
			counts1 += 1;
		}
	}
	for (int i = 0; i < s2.size(); i++)
	{
		if (s2[i] == 'a')
		{
			counts2 += 1;
		}
	}
	if (counts1>=counts2){
		cout << "go" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	return 0;

}