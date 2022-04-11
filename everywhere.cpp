#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		int n;
		cin >> n;
		int count = 0;
		string cityData[101];
		for (int i = 0; i <= n; i++) {
			cin >> cityData[i];
			for (int i = 0; i < n - 1; i++) {
				if (cityData[i] == cityData[i + 1]) {
					count += 1;
				}
		}
		}
		cout << count << endl;
	}
	
	return 0;
}