#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int times;
	cin >> times;
	while (times-->0)
	{
		int count;
		cin >> count;
		vector<int>s(count);
		for (int i = 0; i < count; i++)
			cin >> s[i];
		sort(s.begin(), s.end());
		int loc = count / 2;
		int sum = 0;
		for (int i = 0; i < count; i++)
		{
			if (i == loc)
				continue;
			sum += abs(s[loc] - s[i]);
		}
		cout << sum<< endl;
	}
	return 0;
}