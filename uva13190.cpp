#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
	int a;
	cin >> a;
	while (a-- > 0)
	{
		int med, minn;
		cin >> med >> minn;
		vector<string>drug(med);
		vector<int>fre(med);
		vector<int>loc(med,1);
		for (int i = 0; i < med; ++i)
			cin >> drug[i] >> fre[i];
		while (minn-- > 0)
		{
			int min = fre[0] * loc[0];
			int minloc = 0;
			for (int i = 1; i < med; ++i)
			{
				if (fre[i] * loc[i] < min)
				{
					min = fre[i] * loc[i];
					minloc = i;
				}
			}
			loc[minloc]++;
			cout << min << " " << drug[minloc] << endl;
		}
	}
	return 0;
}