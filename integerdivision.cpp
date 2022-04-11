#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int element, divisor;
	cin >> element >> divisor;
	vector<int>numbers;
	for (int i = 0; i <element; i++)
	{
		cin>> numbers[i];
	}
	for (int i = 0; i < element; i++)
	{
		cout<<numbers[i];
	}
	return 0;
}