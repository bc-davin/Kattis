#include<iostream>
using namespace std;
int main()
{
	string s1;
	int position = 1;
	cin >> s1;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == 'A' and position==2)
		{
			position -= 1;
		}
		else if (s1[i] == 'A' and position== 1)
		{
			position += 1;
		}
		if (s1[i] == 'B' and position==2)
		{
			position += 1;
		}
		else if (s1[i] == 'B' and position == 3)
		{
			position -= 1;
		}
		if (s1[i] == 'C' and position==3)
		{
			position -= 2;
		}
		else if (s1[i] == 'C' and position == 1)
		{
			position += 2;
		}
	}
	cout << position << endl;
	return 0;
}